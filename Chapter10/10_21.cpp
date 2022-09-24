// C++ source file
/***********************************************
# Copyright (c) 2019, Shanghai
# All rights reserved.
#
# @Filename: 10_21.cpp
# @Version：V1.0
# @Author: Wang Xin - to_xin_to@qq.com
# @Description: ---
# @Create Time: 2022-09-24 23:15:43
# @Last Modified: 2022-09-24 23:15:43
***********************************************/
/*
 * ==>问题<== 编写一个lambda, 捕获一个局部int变量，并递减变量值，直至它变为0. 一旦变量变为0，再调用lambda应该不再递减变量。lambda应该返回一个bool值，指出捕获的变量是否为0。
 * ==>考察点<== 练习lambda 改变捕获变量值的方法
 * ==>解答 <== 若lambda需要改变捕获的局部变量的值，需要在参数列表之后，函数体之前使用mutable关键字。为了显示指定返回变量的类型，需要在参数列表后使用 ->bool
 */


#include <iostream>
#include <algorithm>

using namespace std;

void mutable_lambda(void){
    int i = 5;
    auto f = [i]() mutable->bool{if (i > 0)
                                {i--;return false;}
                                else
                                return true;
                                };
    for(int j = 0; j < 6; j++){
        cout<< f()<<" ";
    }
   cout<<endl;
}

int main(int argc,char* argv[]){
    mutable_lambda();
    return 0;
}
