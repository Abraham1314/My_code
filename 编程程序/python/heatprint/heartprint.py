import time
while(1):
    for i in range(6):
        m=" ❤ "*i
        print("\r{: ^24}".format(m),end='')
        time.sleep(1)