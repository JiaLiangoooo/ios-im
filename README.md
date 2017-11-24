### 1.什么是SDK, framework, API ,IDE

```
IDE: 是一整个开发环境. 超级记事本.可以提供自动索引,管理目录,文字多样化. 并且可以编译,运行. Xcode VS

Framework: 骨架,封装好一些基础工具,UIKit:提供一些基础组件,我们可以用来开发APP.

SDK: (software development kit),软件开发包,针对某项技术,类似于给用户直接提供一个功能模块,而不需要重新开发

API: framework, SDK 暴露出来给用户调用的接口,.h 文件

动态库:编译的时候需要link,link之后编译 dylib,tbd, Embedded动态库,.a静态库
静态库:需要在刚开始的时候开始编译.
```
1. [iOS 静态库，动态库与 Framework的区别](https://skyline75489.github.io/post/2015-8-14_ios_static_dynamic_framework_learning.html)
2. [[Dev] IDE, API, SDK, Library 基本術語解釋](http://androchen.logdown.com/posts/2014/04/13/api-sdk-library)
3. [iOS静态库 【.a 和framework】【超详细】](https://github.com/BinaryArtists/ios-doc/blob/master/ios/library/iOS%E9%9D%99%E6%80%81%E5%BA%93%20%E3%80%90.a%20%E5%92%8Cframework%E3%80%91%E3%80%90%E8%B6%85%E8%AF%A6%E7%BB%86%E3%80%91.md)

---
### 2.如何编译SDK
[iOS编译过程的原理和应用](http://blog.csdn.net/hello_hwc/article/details/53557308)

---
### 3.编出一个SDK
- [SDK开发1](http://www.jianshu.com/p/813477451c28)
- [SDK开发2](http://www.jianshu.com/p/60f5312fa729)
- [SDK开发3](http://www.jianshu.com/p/9793dc5a9632)
- [iOS静态库SDK制作（包含第三方静态库）](http://www.jianshu.com/p/155a3cfb765e?utm_source=itdadao&utm_medium=referral)
- [使用CocoaPods开发并打包静态库](http://www.cnblogs.com/brycezhang/p/4117180.html)
- [iOS SDK封装方法整理文档](http://www.jianshu.com/p/9d227f631607)
- [iOS CocoaPods 动/静态库混用封装组件化](http://www.jianshu.com/p/544df88b6a1e)
- [如何制作自己的CocoaPod库](http://www.jianshu.com/p/81d364c32432)
- [创建私有CocoaPods仓库](http://www.jianshu.com/p/af29cf2ee69a)
- [使用私有Cocoapods仓库 中高级用法](http://www.jianshu.com/p/d6a592d6fced)


代码清单

```
pod repo add [私有项目名（repo库）] [github地址]
pod spec create ios-im

git tag -m "fix bug" '0.2'
git push --tags
pod spec lint --allow-warnings
pod trunk push --allow-warnings
pod repo update
pod search ios-im
pod install

```

### 遇到的问题
1.sh Permission denied in iOS Project
```http://www.jianshu.com/p/9d227f6316git tag -m "fix bug" '0.2'07
chmod a+x /Users/Star/work/icsoc/code/ios-im/IMSDK/../scripts/build-universal-framework.sh
```

2. 添加自定义framework运行真机出现dyld: Library not loaded的解决方法
```
错误原因：是没有找到新加入的framework文件包。

解决办法1：
1、在TARGETS中选中某个工程对象
2、选中选项卡【Build Phases】
3、Copy Files (如果没有左上角+ New Copy Files Phases)
点击下面的按钮+，New Copy Files Phase
在Destination中选Frameworks,再点击下面+号，选择自定义的framework

解决方法2:
在项目的General->Embedded Binaries中，将我们自定的framework 添加进去
http://www.cnblogs.com/sunjianfei/p/6668726.html
```
3. pod search xx 不是最新的
```
pod repo update

```

