# CMYK介绍
## CMYK是什么
印刷四分色模式（CMYK）是彩色印刷时采用的一种套色模式，利用色料的三原色混色原理，加上黑色油墨，共计四种颜色混合叠加，形成所谓“全彩印刷”。

四种标准颜色是： 

C：Cyan ＝ 青色

M：Magenta ＝ 洋红色

Y：Yellow ＝ 黄色

K：blacK ＝ 黑色

![](https://upload.wikimedia.org/wikipedia/commons/b/b2/CMYK_color_swatches.png)
## 混色
洋红色加黄色会形成红色；洋红色加青色形成蓝色；青色加黄色形成绿色。 

![](https://upload.wikimedia.org/wikipedia/commons/c/c7/顏色減法.svg)
## 为什么要加入黑色
从理论上来说，只需要CMY三种油墨就足够了，它们三个加在一起就应该得到黑色。但是由于目前制造工艺还不能造出高纯度的油墨。CMY相加的结果实际得到的是深灰色，不足以表现画面中最暗的部分，必须加入黑色。
## 与RGB对比
RGB模式是以色光三原色为基础建立的色彩模式，而CMYK混色，遵循的是CMY“色料的三原色原理”。

两者产生的色彩数差距甚大：CMYK仅有101³+101共1,030,402色，而RGB却有256³共16,777,216色

RGB
![](https://upload.wikimedia.org/wikipedia/commons/a/a6/顏色加法.svg)
## 转换
首先，我们要知道CMYK中三原色对应的RGB值

|颜色|R|G|B|
|:--:|:--:|:--:|:--:|
|青色|0|255|255|
|洋红色|255|0|255|
|黄色|255|255|0|

下面给出将RGB转换为CMYK的公式：

c'=255-r;

m'=255-g;

y'=255-b; 

k=min(c',m',y'); 

c=c'-k; 

m=m'-k; 

y=y'-k;
