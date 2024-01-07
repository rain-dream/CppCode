/*
1.编译源代码
(1).它将C++源代码转换为称为目标文件的机器语言文件，
目标文件通常名为name.o或name.obj，其中name与生成它的.cpp文件的名称相同。

2.链接目标文件和库
(1).在编译器创建一个或多个目标文件之后，另一个称为链接器的程序启动。链接器的工作有三个：
首先，获取编译器生成的所有目标文件，并将它们组合成一个可执行程序。
其次，除了能够链接目标文件之外，链接器还能够链接库文件。一个库文件是预编译代码的集合，它已经“打包”在其他程序中重用。
第三，链接器确保正确解析所有跨文件依赖关系。
*/