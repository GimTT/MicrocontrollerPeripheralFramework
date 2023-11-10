# MicrocontrollerPeripheralFramework

#### 介绍
应用于微控制器的外设配置框架

#### 软件架构
软件架构说明
```
---root
    |---api
        |---外设类别的api c文件
    |---apps
        |---其他类别的api c文件
    |---include
         |---peripheral
                |---外设类别的api 头文件
         |---storage
                |---其他类别的api 头文件
    |---mpf_conf.h
    |---mpf.h
```


#### 使用说明

1.  导入api、apps中的c文件
2.  根据需要引用include目录下的头文件
3.  配置mpf_conf文件
4.  注册接口


