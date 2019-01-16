# 数学公式编辑

$ x^{2} \qquad x_{0} $

证：设一个8位补码表示的二进制数为x, 补码对应的十进制数为 $x' = d_{1} \cdot 16 + d_{0}$. 

将x拓展符号位至32位，得到y. 

当x = 0时，y = 0显然成立， y = x . 

当x > 0时，x(10) = x' . 

$y(10) = 0 \cdot 16^{7} + 0 \cdot 16^{6} + 0 \cdot 16^{5} + 0 \cdot 16^{4} + 0 \cdot 16^{3} + 0 \cdot 16^{2} + d_{1} \cdot 16 + d_{0}$. 

$\therefore y(10) = d_{1} \cdot 16 + d_{0} = x' = x(10)$. 

$\therefore y = x$. 

当x < 0时，$x' = 16^{2} + x(10)$. $y(10) = 15 \cdot 16^{7} + 15 \cdot 16^{6} + 15 \cdot 16^{5} + 15 \cdot 16^{4} + 15 \cdot 16^{3} + 15 \cdot 16^{2} + d_{1} \cdot 16 + d_{0}$. 

$\therefore y(10) = 16^{8} - 16^{2} + d_{1} \cdot 16 + d_{0}$. 

$\therefore y(10) = 16^{8} - 16^{2} + x'$ 

$\therefore y(10) = 16^{8} + x(10)$. 

$\therefore y = x$. 

综上所述：$y = x$ ，命题得证. 

$\blacksquare$
