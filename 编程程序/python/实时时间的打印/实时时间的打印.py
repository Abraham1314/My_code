import time
while(1):
    t=time.localtime()
    T=time.strftime("%Y 年 %m 月 %d 日     时间  ： %H:%M:%S",t)
    print("\r{}".format(T),end='')