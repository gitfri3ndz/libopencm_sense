#ifndef __LSM9DS0_H__
#define __LSM9DS0_H__

#define LSM9DS0_ADDRESS_ACCELMAG (0x1D) // 3B >> 1 = 7bit default

// Temperature: LSB per degree celsius
#define LSM9DS0_TEMP_LSB_DEGREE_CELSIUS    (8)  // 1°C = 8, 25° = 200, etc.

typedef enum
{
     LSM9DS0_REGISTER_TEMP_OUT_L_XM       = 0x05,
     LSM9DS0_REGISTER_TEMP_OUT_H_XM       = 0x06,
     LSM9DS0_REGISTER_STATUS_REG_M        = 0x07,
     LSM9DS0_REGISTER_OUT_X_L_M           = 0x08,
     LSM9DS0_REGISTER_OUT_X_H_M           = 0x09,
     LSM9DS0_REGISTER_OUT_Y_L_M           = 0x0A,
     LSM9DS0_REGISTER_OUT_Y_H_M           = 0x0B,
     LSM9DS0_REGISTER_OUT_Z_L_M           = 0x0C,
     LSM9DS0_REGISTER_OUT_Z_H_M           = 0x0D,
     LSM9DS0_REGISTER_WHO_AM_I_XM         = 0x0F,
     LSM9DS0_REGISTER_INT_CTRL_REG_M      = 0x12,
     LSM9DS0_REGISTER_INT_SRC_REG_M       = 0x13,
     LSM9DS0_REGISTER_CTRL_REG1_XM        = 0x20,
     LSM9DS0_REGISTER_CTRL_REG2_XM        = 0x21,
     LSM9DS0_REGISTER_CTRL_REG5_XM        = 0x24,
     LSM9DS0_REGISTER_CTRL_REG6_XM        = 0x25,
     LSM9DS0_REGISTER_CTRL_REG7_XM        = 0x26,
     LSM9DS0_REGISTER_OUT_X_L_A           = 0x28,
     LSM9DS0_REGISTER_OUT_X_H_A           = 0x29,
     LSM9DS0_REGISTER_OUT_Y_L_A           = 0x2A,
     LSM9DS0_REGISTER_OUT_Y_H_A           = 0x2B,
     LSM9DS0_REGISTER_OUT_Z_L_A           = 0x2C,
     LSM9DS0_REGISTER_OUT_Z_H_A           = 0x2D,
} lsm9ds0MagAccelRegisters_t;

void lsm9ds0_setup_temp(uint32_t i2c, uint8_t sensor);
uint16_t lsm9ds0_read_temp(uint32_t i2c, uint8_t sensor);

#endif
