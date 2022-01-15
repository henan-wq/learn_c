# 安装valgrind
其实就是如何在本地编译源码，并安装：
1. 下载valgrind的bz2文件
2. `md5sum valgrindxxxxxtar.bz2`,md5sum命令是用来计算和校验文件，该命令会输出一个值，通常下载页面也会给你一个bz2文件的值，我们可以用来验证我们下载的文件是不是正确的。
3. `tar -xjvf valgrindxxxxx.tar.bz2`，解压该压缩包，当前目录下会出现一个新的目录
4. `cd 该新目录`,
5. `./configure`建立构建所需的配置
6. `make`构建源码
7. `sudo make install`安装到电脑上。

# 使用valgrind
1. 按照以往的`Makefile`文件，在命令行输入`make filename`，（例如`make ex4`）；
2. 命令行输入`valgrind ./ex4`，能看到valgrind报错的内容，可以搜索报错信息弄清楚如何解决错误；

# 附加题
- 按照上面的指导，使用`Valgrind`和编译器修复这个程序；（已完成）
- 在互联网上查询`Valgrind`相关的资料；
- 下载另一个程序并手动构建它。尝试一些你已使用，但从来没手动构建的程序。
- 看看`Valgrind`的源码如何在目录下组织的，并且阅读它的**Makefile**文件。