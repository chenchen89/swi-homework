# “自顶向下，逐步求精”的编程方法
## 1)Top-down design定义
A top-down approach (also known as stepwise design and in some cases used as a synonym of decomposition) is essentially the breaking down of a system to gain insight into its compositional sub-systems in a reverse engineering fashion. 
## 2)程序设计中的应用(主程序划分)
自顶向下是一种编程风格，是传统程序语言的主流，其设计从指定复杂的部分开始，然后将它们分成连续的小部分。

使用自顶向下方法编写程序的方法是编写一个**主程序**，命名它将需要的所有主要功能。之后，编程团队会查看每个功能的要求，并重复该过程。这些划分的**子程序**最终将执行一些简单的动作，它们可以轻松简洁地编码。当所有各种子程序都被编码后，程序就可以进行测试了。
## 3)设计推广(结构化编程)
自顶向下的设计在20世纪70年代由IBM研究人员Harlan Mills和Niklaus Wirth推广。Mills开发了实用的**结构化编程**概念，并在1969年的项目中对其进行了测试，以自动化纽约时报的太平间指数。该项目的工程和管理成功通过IBM和其他计算机行业推广了自顶向下的方法。

![](https://upload.wikimedia.org/wikipedia/commons/e/ec/Structured_program_patterns.png)

结构化编程是一种编程范例，旨在通过广泛使用结构化控制流构造的选择（if / then / else）和重复（while和for），块结构与子程序来提高计算机程序的清晰度，质量和开发时间。
# 洗衣机控制程序
## 1、大步骤伪代码
```
选择洗衣模式、水量
启动
注水，记录水的高度
浸洗，计时器计时
洗涤，电机转动
漂洗
排水，记录水的高度
脱水，电机转动
停机
```
## 2、各步骤伪代码
```
READ 选择洗衣模式
READ 选择水量
启动
REPEAT
    注水
UNTIL 水位==需求水量
计时
REPEAT
    浸洗
UNTIL 时间==需求时间
终止计时
重新计时
REPEAT
    电机左转3次
    电机右转3次
UNTIL 时间==需求时间
电机停止
停止计时
漂洗
REPEAT
    排水
UNTIL 水位==0
计时
REPEAT
    电机转动脱水
UNTIL 时间==需求时间
停止计时
停机
```
## 3、引入函数
```
{
READ 选择洗衣模式
READ 选择水量
启动
注水(需求水量)
浸洗(需求时间)
洗涤(需求时间)
漂洗
排水(当前水位)
脱水(需求时间)
停机
}

注水(需求水量) {
    REPEAT
        注水
    UNTIL 水位==需求水量
}

浸洗(需求时间) {
    计时
    REPEAT
        浸洗
    UNTIL 时间==需求时间
    终止计时
}

洗涤(需求时间) {
    计时
    REPEAT
        电机左转3次
        电机右转3次
    UNTIL 时间==需求时间
    电机停止
    停止计时
}

排水(当前水位) {
    REPEAT
        排水
    UNTIL 水位==0
}

脱水(需求时间) {
    计时
    REPEAT
        电机转动脱水
    UNTIL 时间==需求时间
    停止计时
}
```