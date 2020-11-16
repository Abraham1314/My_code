import time
while(1):
    t=time.localtime()
    T=time.strftime("%Y-%m-%d    %H:%M:%S",t)
    print("\r{}".format(T),end='')
