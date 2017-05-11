# Compiler_Lab

This is a new General Programming Language: Sword.

Sword借鉴：
Haskell——简洁的语法／类型推断能力／ADT
Rust——生命周期检查／读写检查
C——操控低层的机会（指针）／优秀的运行效率

Sword致力于在保证运行效率的前提下，让编译器做尽可能多的事情，包括但不仅限于：
自动选择数据存放位置（堆／栈）（去掉new存在的必要性）
ARC + 用户可控GC（去掉free存在的必要性）
类型推断（语法的简洁）
类型检查（在编译期拒绝类型错误）
提供语言层面的并发／并行支持
读写检查（自动检查多线程／多进程下数据的安全性）

Sword的开发过程采用敏捷开发的改造版本，具体请看Log/workflow.png
Sword的开发过程中采用单元测试／集成测试来保障代码质量
Sword使用的持续集成服务器的部署如下：
Continuous Integration: https://gist.github.com/Clcanny/e49e1c2f443bc795516bed7061b9a03d
