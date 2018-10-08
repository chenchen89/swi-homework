---
layout: default
---
# 制作游戏
    利用Construct2可以制作各类2D游戏，下面我们来介绍如何运用Construct2来制作游戏。
## `开始`
首先，打开Construct2，新建一个文件，点击图中按钮或输入Ctrl+N。

![](images/game1.png)

选择第一个

![](images/game2.png)
## `插入背景`
让我们来插入一个背景，双击空白区域,选择TiledBackground，插入

![](images/game3.png)

此时鼠标会变为十字光标，左键点击空白区域

点击图中红圈位置，打开文件

![](images/game4.png)

插入后可以在左侧看到背景的属性

![](images/game5.png)

将Position改为0,0，Size改为原布局的规格

原布局的规格

![](images/game6.png)

更改后

![](images/game7.png)

点击图中按钮运行一下,你就可以看到你的背景了

![](images/game8.png)
## `添加层`
层的内容位于右下角，点击layers

![](images/game9.png)

点击图中按钮添加层

![](images/game10.png)

为了区分，点击铅笔按钮重命名
![](images/game11.png)

点击锁标记可以锁定该层，如图，background层已锁定
## `添加鼠标和键盘`
双击布局，选择鼠标和键盘以添加，用于响应之后的事件
## `添加精灵`
接下来，让我们添加游戏中的角色，这些被称作**精灵**

确定目前已选中主层，双击布局，添加精灵

![](images/game12.png)

按照添加背景的方法添加精灵，我们需要添加三种精灵，分别是玩家操作，作为敌人和作为得分用的

你可能还需要爆炸作为特效，添加精灵用于特效（先将其移除布局，因为开始时不需要特效）

接下来让我们来为它重命名以作区分

![](images/game13.png)

## `添加行为`
    接下来我们需要让它们动起来，添加行为以满足游戏中的需要。
### 为玩家添加行为
首先，让我们为玩家添加行为，我们需要的行为有8 Direction（向各方向移动），Scroll To（让屏幕跟随玩家移动）和Bound to layout（让玩家不要走出边界）

选中玩家，在左侧找到行为一项，点击编辑

![](images/game14.png)

添加新的行为

![](images/game15.png)

选择8 Direction一项

![](images/game16.png)

重复以上步骤以添加其他行为

![](images/game17.png)

让我们运行一下游戏，可以看到玩家的移动了
### 添加其他行为
让我们为其他精灵添加行为，需要的行为有

1、为敌人添加Bullet movement（敌人需要移动）

2、为爆炸添加Fade

你还可以根据需要添加其他行为，让我们先添加这些

接下来，更改敌人的移动速度，添加移动行为后可以找到速度一项，将其改为80（可根据具体需要调整）

![](images/game18.png)

将爆炸消失时间改为0.5秒

![](images/game19.png)

运行一下以测试我们的更改
## `添加更多得分标志`
按住Ctrl，用鼠标点击得分标志并拖动，先添加至10个（这些是开局时的得分标志）
## `添加事件`
    我们需要事件来完善这个游戏

### 第一个事件
点击上侧的事件表以进入

![](images/game20.png)

右键，点击添加事件，先添加第一个事件，让玩家跟随鼠标转动

![](images/game21.png)

![](images/game22.png)

![](images/game23.png)

![](images/game24.png)

![](images/game25.png)

Construct2中提供表达式以输入，输入表达式，如下

![](images/game26.png)

最终的效果

![](images/game27.png)

### 添加其他事件
添加其他事件以完善游戏，需要的事件有

![](images/game28.png)
## `添加更多高级内容`
### `添加分数`
让我们添加分数来标记得分

锁定主层，添加新层，命名为HUD

选择HUD层，双击布局，添加文本

![](images/game29.png)

在事件表下单击右键，选择添加变量（global variable），命名为SCORE

![](images/game31.png)

在System Every tick事件下添加行为

![](images/game30.png)

![](images/game32.png)

接下来，添加在碰撞得分标记时玩家得分

![](images/game33.png)

![](images/game34.png)

![](images/game35.png)

最终效果

![](images/game36.png)
### `让计分板跟随玩家`
为玩家添加图像点，双击玩家，在稍远的得分添加图像点

![](images/game38.png)

添加事件如下（改变字体颜色让其明显）

![](images/game37.png)

### `特效`
让爆炸的特效更好，更改爆炸效果，改为additive

![](images/game39.png)
### `其他事件`
添加事件(让敌人跟随玩家)

![](images/game40.png)

添加事件（生成新得分标志）

![](images/game41.png)

## `效果演示`
    这就是大概的游戏制作方式，如果还需要更多事件可以按照以上方法自行添加，让我们来演示一下大致的最终效果

![](images/game.gif)