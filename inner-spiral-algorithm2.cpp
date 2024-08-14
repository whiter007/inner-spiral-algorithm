#include <iostream>
using namespace std;

int main() {

    int num_var = 0;        // 从0到目标点的计数量
    int Num_var = 0;        // 目标点

    int var_step_local = 0; // 当前步数
    int var_step_global = 0;// 全局步数（每改变一次方向增加1）
    int var_facing = 0;     // 朝向（1:左，2:下，3:右，4:上）
    int var_x = 0;          // 当前x坐标
    int var_z = 0;          // 当前z坐标

    while (true) {

        var_step_local = 0; // 当前步数
        var_step_global = 0;// 全局步数
        var_facing = 0;     // 朝向
        var_x = 0;          // 当前x坐标
        var_z = 0;          // 当前z坐标

        cin >> Num_var;

        for (num_var = 0; num_var < Num_var; num_var++) {

            if (var_step_local > 0) {
                switch (var_facing) {
                    case 1: // 左
                        var_x--;
                        break;
                    case 2: // 下
                        var_z--;
                        break;
                    case 3: // 右
                        var_x++;
                        break;
                    case 4: // 上
                        var_z++;
                        break;
                }
                var_step_local--;
            }

            if (var_step_local == 0) {
                var_facing = (var_facing % 4) + 1; // 改变方向
                if (var_facing % 2 != 0) { // 如果朝向变为奇数，则增加全局步数
                    var_step_global++;
                }
                1var_step_local = var_step_global;
            }
        }

        cout << "坐标(" << var_x << "," << var_z << ")" << endl;
    }

    return 0;
}
