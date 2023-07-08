#include <iostream>
using namespace std;
int main() {

    int num_var = 0;        //从0到目标点的计数量   //范围0 ~ Num_var
    int Num_var = 0;        //目标点               //范围1 ~ 2147483647

    int var_step_local = 0; //变量_当前步数
    int var_step_global = 0;//变量_全局步数
    int var_facing = 0;     //变量_朝向
    int var_judgment = 0;   //变量_判断
    int var_x = 0;          //变量_当前x坐标
    int var_z = 0;          //变量_当前z坐标

    while(true)
    {

        var_step_local = 0; //变量_当前步数
        var_step_global = 0;//变量_全局步数
        var_facing = 0;     //变量_朝向
        var_judgment = 0;   //变量_判断
        var_x = 0;          //变量_当前x坐标
        var_z = 0;          //变量_当前z坐标

       cin>>Num_var;

       for (num_var = 0; num_var < Num_var; num_var++)
       {
            if (var_step_local>0 && var_facing==1){var_x -= 1;}
            
            if (var_step_local>0 && var_facing==2){var_z -= 1;}
            
            if (var_step_local>0 && var_facing==3){var_x += 1;}
            
            if (var_step_local>0 && var_facing==4){var_z += 1;}
            
            if (var_step_local>0){var_step_local -= 1;}
            
            if (var_step_local==0){var_facing += 1;    var_judgment += 1;}
            
            if (var_facing==5){var_facing = 1;}
            
            if (var_judgment==1){var_step_global += 1;    var_judgment = -1;}
            
            if (var_step_local==0){var_step_local = var_step_global;} 
       }
       
       cout<<"坐标("<<var_x<<","<<var_z<<")";
    }
    return 0;
}
