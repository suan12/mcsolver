# mcsolver
A user friendly tools using Monte Carlo simulations for estimation of Curie temperature

本软件版权归属： 1.深圳大学，机电与控制工程学院，2.山东大学 物理学院
本软件作者       ： 刘亮 博士 1.深圳大学，机电与控制工程学院，2.山东大学 物理学院
若有使用中的问题或报错，请发邮件至：liangliu@mail.sdu.edu.cn

网盘下载地址：
链接：https://pan.baidu.com/s/1EaDqOOdB7AP9WXrwEIEaxQ 
提取码：52ze 

安装方法：
无需安装

使用方法：
打开软件（打开较慢约10s），从上至下依次填写参数，然后点击submit即可。如有帮助请引用论文，谢谢。

1.填写/修改晶格基矢

2.增查改删轨道信息，注意坐标为分数坐标

3.增查改删交换作用（Bond），包括xyz三个方向的交换强度（目前只需要设定Jz）、交换链接的两个轨道的ID、交换跨越的晶格矢量。
   点选一个列表中的交换，结构预览中的键会变成粗黄线，看看是否与预料中的一样。
   轨道与交换作用修改之后，或者点选交换作用的列表，结构预览就会更新，可以用鼠标翻转结构，多角度检查。

4.设定其他参数，包括温度始末点以及总的温度插值点、nthermal：热化所需次数、nsweep：热化后的统计次数、模型（暂时只支持Ising，即将
   增加XY模型，Heisenberg模型等。不久之后还会加入部分量子蒙特卡洛模型）、算法（暂只支持Metroplis局域更新，与Wolff区块更新，即将
   加入Sweden-Wang算法、continuous time 算法与Order conserving算法）

5.设定并行线程数

6.点击submit按钮

7.右侧出图之后就计算完成了。在软件所在目录有一个result.txt记录了平均自旋、磁化率、能量、比热等信息。如果并行计算温度的次序可能是错乱的，但是
   每行的对应是正确的。

希望该软件对您的工作有帮助。请引用参考文献：
Magnetic switches via electric field in BN nanoribbons. Applied Surface Science 480(2019)
