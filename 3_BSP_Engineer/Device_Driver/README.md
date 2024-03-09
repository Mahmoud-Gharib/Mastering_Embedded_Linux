# Mastering_Embedded_Linux

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
        
