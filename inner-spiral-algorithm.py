def main():
    while True:
        var_step_local = 0  # 变量_当前步数
        var_step_global = 0  # 变量_全局步数
        var_facing = 0  # 变量_朝向
        var_judgment = 0  # 变量_判断
        var_x = 0  # 变量_当前x坐标
        var_z = 0  # 变量_当前z坐标

        num_var = int(input())  # 读取目标点

        for _ in range(num_var):
            if var_step_local > 0 and var_facing == 1:
                var_x -= 1
            
            if var_step_local > 0 and var_facing == 2:
                var_z -= 1
            
            if var_step_local > 0 and var_facing == 3:
                var_x += 1
            
            if var_step_local > 0 and var_facing == 4:
                var_z += 1
            
            if var_step_local > 0:
                var_step_local -= 1
            
            if var_step_local == 0:
                var_facing += 1
                var_judgment += 1
            
            if var_facing == 5:
                var_facing = 1
            
            if var_judgment == 1:
                var_step_global += 1
                var_judgment = -1
            
            if var_step_local == 0:
                var_step_local = var_step_global
        
        print(f"坐标({var_x},{var_z})")

if __name__ == "__main__":
    main()
  
