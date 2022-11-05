#include <stdio.h>

// 字符类型，是单个字符，how ,what ,when
/**
字符类型的声明 使用char关键字
字符类型是指单个字符，C语言规定单个字符必须放在单引号里
在计算机内部，一个字符类型 使用一个字节存储，
C语言内部当做整数来出来，所以字符类型就是宽度为一个字节的整数，每个字符对应一个整数，（由 ASCII 码确定）

字符类型在不同的计算机内，默认类型是不一样的，一些系统默认是 -128 -- 127
另外一些系统默认是 0-255  这两种范围正好能覆盖  0-127的字符范围
只要在字符类型的宽度范围之内，整数和字符是可以互换的，
*/
char a = 'a';
char c = 66;
// 下面的打印会报错，因为 900 不在字符类型的宽度范围之类
// 测试发现，本台计算机的字符类型的宽度范围是-128 -  127

//
char d = 127;

// 特殊字符
// \b：退格键，光标回退一个字符，但不删除字符。
// \f：换页符，光标移到下一页。在现代系统上，这已经反映不出来了，行为改成类似于\v。
// \n：换行符。
// \r：回车符，光标移到同一行的开头。
// \t：制表符，光标移到下一个水平制表位，通常是下一个8的倍数。
// \v：垂直分隔符，光标移到下一个垂直制表位，通常是下一行的同一列。
// \0：null 字符，代表没有内容。注意，这个值不等于数字0。

// 什么是特殊字符，无法打印的控制字符
int main()
{
  printf("hello,world \n");
  printf("%c \n", a);
  // 打印出来的是个字符
  printf("%c \n", c);

  printf("%c \n", d);
}