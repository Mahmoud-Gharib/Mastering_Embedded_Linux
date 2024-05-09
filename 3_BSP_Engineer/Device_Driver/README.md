# Mastering_Embedded_Linux

![DD_P1](https://github.com/Mahmoud-Gharib/Mastering_Embedded_Linux/assets/62407045/aacfa631-6481-4174-8bc8-a64034c5ebf3)

    --> Device_Driver 
     
        1) Install Stable Release of Kernel Headers
            1) uname -r
            2) sudo apt-cache search linux-headers
            3) sudo apt-cache search linux-headers | grep `uname -r`
            4) sudo apt-get install linux-headers-6.2.0-39-generic 
            
        2) Important Commands :
            1) sudo dmesg 
            2) lsmod
            3) modinfo <Device_Driver_Name>.ko
            4) sudo insmod <Device_Driver_Name>.ko
            5) sudo rmmod <Device_Driver_Name>.ko
            6) 
        
