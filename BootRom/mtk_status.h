/*******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2006
 *
 ******************************************************************************/
#ifndef _MTK_STATUS_H_
#define _MTK_STATUS_H_

//------------------------------------------------------------------------------
// return code                                                                  
//------------------------------------------------------------------------------
typedef enum {

    S_DONE = 0
	,STATUS_OK = S_DONE
    // private random error code (1~999) 

    // common error code (1000~1999) 
    ,S_COMMON_ERROR_BEGIN = 1000
    ,S_STOP = S_COMMON_ERROR_BEGIN
    ,S_UNDEFINED_ERROR
    ,S_INVALID_ARGUMENTS
    ,S_INVALID_BBCHIP_TYPE
    ,S_INVALID_EXT_CLOCK
    ,S_INVALID_BMTSIZE
    ,S_GET_DLL_VER_FAIL
    ,S_INVALID_BUF
    ,S_BUF_IS_NULL
    ,S_BUF_LEN_IS_ZERO
    ,S_BUF_SIZE_TOO_SMALL
    ,S_NOT_ENOUGH_STORAGE_SPACE
    ,S_NOT_ENOUGH_MEMORY
    ,S_COM_PORT_OPEN_FAIL
    ,S_COM_PORT_SET_TIMEOUT_FAIL
    ,S_COM_PORT_SET_STATE_FAIL
    ,S_COM_PORT_PURGE_FAIL
    ,S_FILEPATH_NOT_SPECIFIED_YET
    ,S_UNKNOWN_TARGET_BBCHIP
    ,S_SKIP_BBCHIP_HW_VER_CHECK
    ,S_UNSUPPORTED_VER_OF_BOOT_ROM
    ,S_UNSUPPORTED_VER_OF_BOOTLOADER
    ,S_UNSUPPORTED_VER_OF_DA
    ,S_UNSUPPORTED_VER_OF_SEC_INFO
    ,S_UNSUPPORTED_VER_OF_ROM_INFO
    ,S_SEC_INFO_NOT_FOUND
    ,S_ROM_INFO_NOT_FOUND
    ,S_CUST_PARA_NOT_SUPPORTED
    ,S_CUST_PARA_WRITE_LEN_INCONSISTENT
    ,S_SEC_RO_NOT_SUPPORTED
    ,S_SEC_RO_WRITE_LEN_INCONSISTENT
    ,S_ADDR_N_LEN_NOT_32BITS_ALIGNMENT
    ,S_UART_CHKSUM_ERROR
    ,S_EMMC_FLASH_BOOT
    ,S_NOR_FLASH_BOOT
    ,S_NAND_FLASH_BOOT
    ,S_UNSUPPORTED_VER_OF_EMI_INFO
    ,S_PART_NO_VALID_TABLE
    ,S_PART_NO_SPACE_FOUND

    /* SV5 ANDROID { */
    ,S_UNSUPPORTED_VER_OF_SEC_CFG
    /* SV5 ANDROID } */
    ,S_UNSUPPORTED_OPERATION
    ,S_CHKSUM_ERROR
    ,S_TIMEOUT

    ,S_COMMON_ERROR_END // END 

    // BOOT ROM error code (2000~2999) 
    ,S_BROM_ERROR_BEGIN = 2000
    ,S_BROM_SET_META_REG_FAIL = S_BROM_ERROR_BEGIN
    ,S_BROM_SET_FLASHTOOL_REG_FAIL
    ,S_BROM_SET_REMAP_REG_FAIL
    ,S_BROM_SET_EMI_FAIL
    ,S_BROM_DOWNLOAD_DA_FAIL
    ,S_BROM_CMD_STARTCMD_FAIL
    ,S_BROM_CMD_STARTCMD_TIMEOUT
    ,S_BROM_CMD_JUMP_FAIL
    ,S_BROM_CMD_WRITE16_MEM_FAIL
    ,S_BROM_CMD_READ16_MEM_FAIL
    ,S_BROM_CMD_WRITE16_REG_FAIL
    ,S_BROM_CMD_READ16_REG_FAIL
    ,S_BROM_CMD_CHKSUM16_MEM_FAIL
    ,S_BROM_CMD_WRITE32_MEM_FAIL
    ,S_BROM_CMD_READ32_MEM_FAIL
    ,S_BROM_CMD_WRITE32_REG_FAIL
    ,S_BROM_CMD_READ32_REG_FAIL
    ,S_BROM_CMD_CHKSUM32_MEM_FAIL
    ,S_BROM_JUMP_TO_META_MODE_FAIL
    ,S_BROM_WR16_RD16_MEM_RESULT_DIFF
    ,S_BROM_CHKSUM16_MEM_RESULT_DIFF
    ,S_BROM_BBCHIP_HW_VER_INCORRECT
    ,S_BROM_FAIL_TO_GET_BBCHIP_HW_VER
    ,S_BROM_AUTOBAUD_FAIL
    ,S_BROM_SPEEDUP_BAUDRATE_FAIL
    ,S_BROM_LOCK_POWERKEY_FAIL
    ,S_BROM_WM_APP_MSG_OUT_OF_RANGE
    ,S_BROM_NOT_SUPPORT_MT6205B
    ,S_BROM_EXCEED_MAX_DATA_BLOCKS
    ,S_BROM_EXTERNAL_SRAM_DETECTION_FAIL
    ,S_BROM_EXTERNAL_DRAM_DETECTION_FAIL
    ,S_BROM_GET_FW_VER_FAIL
    ,S_BROM_CONNECT_TO_BOOTLOADER_FAIL
// SV5 - MT6276
    ,S_BROM_CMD_SEND_DA_FAIL
    ,S_BROM_CMD_SEND_DA_CHKSUM_DIFF
    ,S_BROM_CMD_JUMP_DA_FAIL
    ,S_BROM_CMD_JUMP_BL_FAIL
// ...
    ,S_BROM_EFUSE_REG_NO_MATCH_WITH_TARGET
    ,S_BROM_EFUSE_WRITE_TIMEOUT
    ,S_BROM_EFUSE_DATA_PROCESS_ERROR
    ,S_BROM_EFUSE_BLOW_ERROR
	,S_BROM_EFUSE_ALREADY_BROKEN
    ,S_BROM_EFUSE_BLOW_PARTIAL

    ,S_BROM_SEC_VER_FAIL
    ,S_BROM_PL_SEC_VER_FAIL
    ,S_BROM_SET_WATCHDOG_FAIL
    ,S_BROM_EFUSE_VALUE_IS_NOT_ZERO
    ,S_BROM_EFUSE_WRITE_TIMEOUT_WITHOUT_EFUSE_VERIFY
    ,S_BROM_EFUSE_UNKNOW_EXCEPTION_WITHOUT_EFUSE_VERIFY

    ,S_BROM_ERROR_END // END 

    // DA error code (3000~3999) 
    ,S_DA_ERROR_BEGIN = 3000
    ,S_DA_INT_RAM_ERROR = S_DA_ERROR_BEGIN
    ,S_DA_EXT_RAM_ERROR
    ,S_DA_SETUP_DRAM_FAIL
    ,S_DA_SETUP_PLL_ERR
    ,S_DA_SETUP_EMI_PLL_ERR
    ,S_DA_DRAM_ABNORMAL_TYPE_SETTING
    ,S_DA_DRAMC_RANK0_CALIBRATION_FAILED
    ,S_DA_DRAMC_RANK1_CALIBRATION_FAILED
    ,S_DA_DRAM_NOT_SUPPORT
    ,S_DA_RAM_FLOARTING
    ,S_DA_RAM_UNACCESSABLE
    ,S_DA_RAM_ERROR
    ,S_DA_DEVICE_NOT_FOUND
    ,S_DA_NOR_UNSUPPORTED_DEV_ID
    ,S_DA_NAND_UNSUPPORTED_DEV_ID
    ,S_DA_NOR_FLASH_NOT_FOUND
    ,S_DA_NAND_FLASH_NOT_FOUND
    ,S_DA_SOC_CHECK_FAIL
    ,S_DA_NOR_PROGRAM_FAILED
    ,S_DA_NOR_ERASE_FAILED
    ,S_DA_NAND_PAGE_PROGRAM_FAILED
    ,S_DA_NAND_SPARE_PROGRAM_FAILED
    ,S_DA_NAND_HW_COPYBACK_FAILED
    ,S_DA_NAND_ERASE_FAILED
    ,S_DA_TIMEOUT
    ,S_DA_IN_PROGRESS
    ,S_DA_SUPERAND_ONLY_SUPPORT_PAGE_READ
    ,S_DA_SUPERAND_PAGE_PRGRAM_NOT_SUPPORT
    ,S_DA_SUPERAND_SPARE_PRGRAM_NOT_SUPPORT
    ,S_DA_SUPERAND_COPYBACK_NOT_SUPPORT
    ,S_DA_NOR_CMD_SEQUENCE_ERR
    ,S_DA_NOR_BLOCK_IS_LOCKED
    ,S_DA_NAND_BLOCK_IS_LOCKED
    ,S_DA_NAND_BLOCK_DATA_UNSTABLE
    ,S_DA_NOR_BLOCK_DATA_UNSTABLE
    ,S_DA_NOR_VPP_RANGE_ERR
    ,S_DA_INVALID_BEGIN_ADDR
    ,S_DA_NOR_INVALID_ERASE_BEGIN_ADDR
    ,S_DA_NOR_INVALID_READ_BEGIN_ADDR
    ,S_DA_NOR_INVALID_PROGRAM_BEGIN_ADDR
    ,S_DA_INVALID_RANGE
    ,S_DA_NOR_PROGRAM_AT_ODD_ADDR
    ,S_DA_NOR_PROGRAM_WITH_ODD_LENGTH
    ,S_DA_NOR_BUFPGM_NO_SUPPORT
    ,S_DA_NAND_UNKNOWN_ERR
    ,S_DA_NAND_BAD_BLOCK
    ,S_DA_NAND_ECC_1BIT_CORRECT
    ,S_DA_NAND_ECC_2BITS_ERR
    ,S_DA_NAND_SPARE_CHKSUM_ERR
    ,S_DA_NAND_HW_COPYBACK_DATA_INCONSISTENT
    ,S_DA_NAND_INVALID_PAGE_INDEX
    ,S_DA_NFI_NOT_SUPPORT
    ,S_DA_NFI_CS1_NOT_SUPPORT
    ,S_DA_NFI_16BITS_IO_NOT_SUPPORT
    ,S_DA_NFB_BOOTLOADER_NOT_EXIST
    ,S_DA_NAND_NO_GOOD_BLOCK
    ,S_DA_NAND_UBIIMG_NOT_SPARSEIMAGE
    ,S_DA_BOOTLOADER_IS_TOO_LARGE
    ,S_DA_SIBLEY_REWRITE_OBJ_MODE_REGION
    ,S_DA_SIBLEY_WRITE_B_HALF_IN_CTRL_MODE_REGION
    ,S_DA_SIBLEY_ILLEGAL_CMD
    ,S_DA_SIBLEY_PROGRAM_AT_THE_SAME_REGIONS
    ,S_DA_UART_GET_DATA_TIMEOUT
    ,S_DA_UART_GET_CHKSUM_LSB_TIMEOUT
    ,S_DA_UART_GET_CHKSUM_MSB_TIMEOUT
    ,S_DA_UART_DATA_CKSUM_ERROR
    ,S_DA_UART_RX_BUF_FULL
    ,S_DA_UART_RX_BUF_NOT_ENOUGH
    ,S_DA_FLASH_RECOVERY_BUF_NOT_ENOUGH
    ,S_DA_HANDSET_SEC_INFO_NOT_FOUND
    ,S_DA_HANDSET_SEC_INFO_MAC_VERIFY_FAIL
    ,S_DA_HANDSET_ROM_INFO_NOT_FOUND
    ,S_DA_HANDSET_FAT_INFO_NOT_FOUND
    ,S_DA_OPERATION_UNSUPPORT_FOR_NFB
    ,S_DA_BYPASS_POST_PROCESS
    ,S_DA_NOR_OTP_NOT_SUPPORT
    ,S_DA_NOR_OTP_EXIST
    ,S_DA_NOR_OTP_LOCKED
    ,S_DA_NOR_OTP_GETSIZE_FAIL
    ,S_DA_NOR_OTP_READ_FAIL
    ,S_DA_NOR_OTP_PROGRAM_FAIL
    ,S_DA_NOR_OTP_LOCK_FAIL
    ,S_DA_NOR_OTP_LOCK_CHECK_STATUS_FAIL
    ,S_DA_BLANK_FLASH
    ,S_DA_CODE_AREA_IS_BLANK
    ,S_DA_SEC_RO_AREA_IS_BLANK
    ,S_DA_NOR_OTP_UNLOCKED
    ,S_DA_UNSUPPORTED_BBCHIP
    ,S_DA_FAT_NOT_EXIST
    ,S_DA_EXT_SRAM_NOT_FOUND
    ,S_DA_EXT_DRAM_NOT_FOUND
    ,S_DA_MT_PIN_LOW
    ,S_DA_MT_PIN_HIGH
    ,S_DA_MT_PIN_SHORT
    ,S_DA_MT_BUS_ERROR
    ,S_DA_MT_ADDR_NOT_2BYTE_ALIGNMENT
    ,S_DA_MT_ADDR_NOT_4BYTE_ALIGNMENT
    ,S_DA_MT_SIZE_NOT_2BYTE_ALIGNMENT
    ,S_DA_MT_SIZE_NOT_4BYTE_ALIGNMENT
    ,S_DA_MT_DEDICATED_PATTERN_ERROR
    ,S_DA_MT_INC_PATTERN_ERROR
    ,S_DA_MT_DEC_PATTERN_ERROR
    ,S_DA_NFB_BLOCK_0_IS_BAD
    ,S_DA_CUST_PARA_AREA_IS_BLANK
    ,S_DA_ENTER_RELAY_MODE_FAIL
    ,S_DA_ENTER_RELAY_MODE_IS_FORBIDDEN_AFTER_META
    ,S_DA_NAND_PAGE_READ_FAILED
    ,S_DA_NAND_IMAGE_BLOCK_NO_EXIST
    ,S_DA_NAND_IMAGE_LIST_NOT_EXIST
    ,S_DA_MBA_RESOURCE_NO_EXIST_IN_TARGET
    ,S_DA_MBA_PROJECT_VERSION_NO_MATCH_WITH_TARGET
    ,S_DA_MBA_UPDATING_RESOURCE_NO_EXIST_IN_TARGET
    ,S_DA_MBA_UPDATING_RESOURCE_SIZE_EXCEED_IN_TARGET
    ,S_DA_NAND_BIN_SIZE_EXCEED_MAX_SIZE
    ,S_DA_NAND_EXCEED_CONTAINER_LIMIT
    ,S_DA_NAND_REACH_END_OF_FLASH
    ,S_DA_NAND_OTP_NOT_SUPPORT
    ,S_DA_NAND_OTP_EXIST
    ,S_DA_NAND_OTP_LOCKED
    ,S_DA_NAND_OTP_LOCK_FAIL
    ,S_DA_NAND_OTP_UNLOCKED
    ,S_DA_OTP_NOT_SUPPORT
    ,S_DA_OTP_EXIST
    ,S_DA_OTP_LOCKED
    ,S_DA_OTP_GETSIZE_FAIL
    ,S_DA_OTP_READ_FAIL
    ,S_DA_OTP_PROGRAM_FAIL
    ,S_DA_OTP_LOCK_FAIL
    ,S_DA_OTP_LOCK_CHECK_STATUS_FAIL    
    ,S_DA_OTP_UNLOCKED
    ,S_DA_SEC_RO_ILLEGAL_MAGIC_TAIL
    ,S_DA_HANDSET_FOTA_INFO_NOT_FOUND
    ,S_DA_HANDSET_UA_INFO_NOT_FOUND
    ,S_DA_SB_FSM_INVALID_INFO
    ,S_DA_NFB_TARGET_DUAL_BL_PAIRED_VERSION_NOT_MATCHED_WITH_MAUI
    ,S_DA_NFB_TARGET_DUAL_BL_FEATURE_COMBINATION_NOT_MATCHED_WITH_MAUI
    ,S_DA_NFB_TARGET_IS_SINGLE_BL_BUT_PC_NOT
    ,S_DA_NFB_TARGET_IS_DUAL_BL_BUT_PC_NOT
    ,S_DA_NOR_TARGET_BL_PAIRED_VERSION_NOT_MATCHED_WITH_MAUI
    ,S_DA_NOR_TARGET_BL_FEATURE_COMBINATION_NOT_MATCHED_WITH_MAUI
    ,S_DA_NOR_TARGET_IS_NOT_NEW_BL_BUT_PC_IS
    ,S_DA_NOR_TARGET_IS_NEW_BL_BUT_PC_NOT
// MT6276 SV5 Bootloader
    ,S_DA_DOWNLOAD_BOOTLOADER_FLASH_DEV_IS_NONE
    ,S_DA_DOWNLOAD_BOOTLOADER_FLASH_DEV_IS_NOT_SUPPORTED
    ,S_DA_DOWNLOAD_BOOTLOADER_BEGIN_ADDR_OVERLAPS_WITH_PREVIOUS_BOUNDARY
    ,S_DA_UPDATE_BOOTLOADER_EXIST_MAGIC_NOT_MATCHED
    ,S_DA_UPDATE_BOOTLOADER_FILE_TYPE_NOT_MATCHED
    ,S_DA_UPDATE_BOOTLOADER_FILE_SIZE_EXCEEDS_BOUNDARY_ADDR
    ,S_DA_UPDATE_BOOTLOADER_BEGIN_ADDR_NOT_MATCHED
    ,S_DA_EMMC_FLASH_NOT_FOUND
    ,S_DA_EMMC_FW_VER_CHECK_FAIL
    ,S_DA_SDMMC_FLASH_NOT_FOUND    
    ,S_DA_SDMMC_CONFIG_FAILED
    ,S_DA_SDMMC_READ_FAILED
    ,S_DA_SDMMC_WRITE_FAILED
    ,S_DA_SDMMC_ERR_CRC
    ,S_DA_SDMMC_ERR_TIMEOUT
    ,S_DA_SDMMC_UNSUPPORTED
    ,S_DA_DSPBL_CHECK_PLATFORM_FAILED
//UFS
	,S_DA_UFS_FLASH_NOT_FOUND
	,S_DA_UFS_CONFIG_FAILED
	,S_DA_UFS_READ_FAILED
	,S_DA_UFS_WRITE_FAILED
	,S_DA_UFS_ERR_TIMEOUT
	,S_DA_UFS_UNSUPPORTED
	,S_DA_UFS_OTP_NOT_SUPPORT
    ,S_DA_UFS_OTP_EXIST
    ,S_DA_UFS_OTP_LOCKED
    ,S_DA_UFS_OTP_LOCK_FAIL
    ,S_DA_UFS_OTP_UNLOCKED 
    
    /* SV5 ANDROID { */
    ,S_DA_HANDSET_SEC_CFG_NOT_FOUND
    /* SV5 ANDROID } */
    
    /* EMMC OTP */
    ,S_DA_EMMC_OTP_NOT_SUPPORT
    ,S_DA_EMMC_OTP_EXIST
    ,S_DA_EMMC_OTP_LOCKED
    ,S_DA_EMMC_OTP_LOCK_FAIL
    ,S_DA_EMMC_OTP_UNLOCKED   
    /* EMMC OTP */

    //Read IMEI/PID/SWV 
    ,S_DA_READ_IMEI_PID_SWV_NOT_SUPPORT    

    //nand empty page flag
    ,S_DA_NFI_EMPTY_PAGE   

    /*Support to check format/download status, 2013/01/19 }*/
    ,S_DA_INVALID_STORAGE_TYPE
    ,S_DA_SEND_CMD_FAIL
    ,S_DA_READ_CMD_ACK_FAIL
    ,S_DA_READ_FLASH_STATUS_INFO_FAIL
    /*Support to check format/download status, 2013/01/19 {*/
    ,S_PL_VALIDATION_FAIL

    ,S_STORAGE_NOT_MATCH
    ,S_CHIP_TYPE_NOT_MATCH

    ,S_DA_EXCEED_MAX_PARTITION_COUNT

    ,S_DA_ERROR_END // END 

    // FlashTool error code (4000~4999) 
    ,S_FT_ERROR_BEGIN = 4000
    ,S_FT_CALLBACK_DA_REPORT_FAIL = S_FT_ERROR_BEGIN
    ,S_FT_DA_NO_RESPONSE
    ,S_FT_DA_SYNC_INCORRECT
    ,S_FT_DA_VERSION_INCORRECT
    ,S_FT_DA_INIT_SYNC_ERROR
    ,S_FT_GET_DSP_VER_FAIL
    ,S_FT_CHANGE_BAUDRATE_FAIL
    ,S_FT_SET_DOWNLOAD_BLOCK_FAIL
    ,S_FT_DOWNLOAD_FAIL
    ,S_FT_READBACK_FAIL
    ,S_FT_FORMAT_FAIL
    ,S_FT_FINISH_CMD_FAIL
    ,S_FT_ENABLE_WATCHDOG_FAIL
    ,S_FT_NFB_DOWNLOAD_BOOTLOADER_FAIL
    ,S_FT_NFB_DOWNLOAD_CODE_FAIL
    ,S_FT_NFB_INVALID_BOOTLOADER_DRAM_SETTING
    ,S_FT_NAND_READADDR_NOT_PAGE_ALIGNMENT
    ,S_FT_NAND_READLEN_NOT_PAGE_ALIGNMENT
    ,S_FT_READ_REG16_FAIL
    ,S_FT_WRITE_REG16_FAIL
    ,S_FT_CUST_PARA_GET_INFO_FAIL
    ,S_FT_CUST_PARA_READ_FAIL
    ,S_FT_CUST_PARA_WRITE_FAIL
    ,S_FT_INVALID_FTCFG_OPERATION
    ,S_FT_INVALID_CUST_PARA_OPERATION
    ,S_FT_INVALID_SEC_RO_OPERATION
    ,S_FT_INVALID_OTP_OPERATION
    ,S_FT_POST_PROCESS_FAIL
    ,S_FT_FTCFG_UPDATE_FAIL
    ,S_FT_SEC_RO_GET_INFO_FAIL
    ,S_FT_SEC_RO_READ_FAIL
    ,S_FT_SEC_RO_WRITE_FAIL
    ,S_FT_ENABLE_DRAM_FAIL
    ,S_FT_FS_FINDFIRSTEX_FAIL
    ,S_FT_FS_FINDNEXTEX_FAIL
    ,S_FT_FS_FOPEN_FAIL
    ,S_FT_FS_GETFILESIZE_FAIL
    ,S_FT_FS_READ_FAIL
    ,S_FT_FS_FILENAME_INVALID
    ,S_FT_FS_FILENAME_TOO_LONG
    ,S_FT_FS_ASSERT
    ,S_FT_OTP_ADDR_NOT_WORD_ALIGNMENT
    ,S_FT_OTP_LENGTH_NOT_WORD_ALIGNMENT
    ,S_FT_OTP_INVALID_ADDRESS_RANGE
    ,S_FT_NAND_READ_TO_BUFFER_NOT_SUPPORT
    ,S_FT_GET_PROJECT_ID_FAIL
    ,S_FT_ENFB_ROM_FILE_SMALL_THAN_HEADER_DESCRIBE
    ,S_FT_RW_EXTRACT_NFB_FAIL
    ,S_FT_MEMORY_TEST_FAIL
    ,S_FT_CHECK_BOOTLOADER_FEATURE_FAIL
    ,S_FT_NEED_DOWNLOAD_ALL_FAIL
    ,S_FT_NEW_PARTITION_TBL_FAIL
    ,S_FT_UPDATE_PARTITION_TBL_FAIL
    ,S_FT_PROTOCOL_EXCEPTION
    ,S_FT_PROTOCOL_EXCEPTION_WITHOUT_EFUSE_VERIFY 
    ,S_FT_COMMUNICATION_ERROR_WITHOUT_EFUSE_VERIFY 
    ,S_FT_GET_MAC_FAIL
    ,S_FT_GET_TIME_FAIL
	,S_FT_GET_MEMORY_FAIL
	,S_FT_GET_MODEM_FAIL

    ,S_FT_ERROR_END // END 

    // FlashTool Handle error code (5000~5999) 
    ,S_FTHND_ERROR_BEGIN = 5000
    ,S_AUTH_HANDLE_IS_NOT_READY = S_FTHND_ERROR_BEGIN
    ,S_INVALID_AUTH_FILE
    ,S_INVALID_DA_FILE
    ,S_DA_HANDLE_IS_NOT_READY
    ,S_FTHND_ILLEGAL_INDEX
    ,S_FTHND_HANDLE_BUSY_NOW
    ,S_FTHND_FILE_IS_UPDATED
    ,S_FTHND_FILE_IS_NOT_LOADED_YET
    ,S_FTHND_FILE_LOAD_FAIL
    ,S_FTHND_FILE_UNLOAD_FAIL
    ,S_FTHND_LIST_IS_EMPTY
    ,S_DL_SCAT_INCORRECT_FORMAT
    ,S_DL_SCAT_ADDR_IS_NOT_WORD_ALIGN
    ,S_DL_SCAT_OFFSET_IS_NOT_WORD_ALIGN
    ,S_DL_SCAT_ADDR_IS_NOT_ASCENDING_ORDER
    ,S_DL_SCAT_JUMPTABLE_IS_NOT_ABSOLUTE_ADDR
    ,S_DL_LOAD_REGION_IS_OVERLAP
    ,S_DL_LOAD_REGION_NOT_FOUND
    ,S_DL_NOT_RESOURCE_BIN
    ,S_DL_MULTIBIN_MECHANISM_DISABLED
    ,S_DL_RESOURCE_NOT_MATCH_IN_JUMPTABLE
    ,S_DL_RESOURCE_MUST_DOWNLOAD_WITH_JUMPTABLE
    ,S_DL_OVERLAP_WITH_EXISTING_RESOURCE
    ,S_DL_INVALID_RESOURCE_BIN
    ,S_DL_JUMPTABLE_INCONSISTENT_WITH_SCAT
    ,S_DL_INVALID_JUMPTABLE
    ,S_DL_IMG_BEGIN_ADDR_NOT_BLOCK_ALIGNMENT
    ,S_DL_REGION_ADDR_INCONSISTENT_WITH_SCAT
    ,S_DL_REGION_ADDR_INCONSISTENT_WITH_RESOURCE_ADDR
    ,S_DL_INVALID_BOOTLOADER
    ,S_DL_INVALID_BOOTLOADER_CHKSUM_SEED
    ,S_DL_BOOTLOADER_IS_NOT_LOADED_YET
    ,S_DL_BOOTLOADER_NOT_FOUND
    ,S_DL_REMOTE_FILE_UNSUPPORTED_BY_BL_AUTOLOAD
    ,S_DLIST_SAME_BBCHIP_SW_VER
    ,S_DLIST_BBCHIP_HW_VER_NOT_MATCHED
    ,S_DLIST_NO_MATCHED_DL_HANDLE_FOUND
    ,S_DLIST_DL_HANDLE_NOT_IN_LIST
    ,S_DLIST_DL_HANDLE_ALREADY_IN_LIST
    ,S_FTHND_CALLBACK_REMOTE_GET_FILE_LEN_FAIL
    ,S_FTHND_CALLBACK_REMOTE_READ_FILE_FAIL
    ,S_FTHND_CALLBACK_FILE_INTEGRITY_CHECK_FAIL
    ,S_UNSUPPORTED_VER_OF_AUTH_FILE
    ,S_DL_PROJECT_ID_DIFF_BETWEEN_MAIN_CODE_AND_JUMP_TBL
    ,S_DL_SCAT_OPEN_FAIL
    ,S_FTHND_CALLBACK_COM_INIT_STAGE_FAIL
    ,S_DL_UNSECURE_MAUI_TO_SECURE_BB
    ,S_FTHND_CALLBACK_REMOTE_GET_SIG_LEN_FAIL
    ,S_FTHND_CALLBACK_REMOTE_READ_SIG_FAIL
    ,S_DL_RESOURCE_MUST_DOWNLOAD_WITH_ANOTHERBIN
    ,S_DL_RESOURCE_MUST_DOWNLOAD_WITH_ENFB
    ,S_DL_PROJECT_ID_DIFF_BETWEEN_MAIN_CODE_AND_RESOURCE_BIN
    ,S_DL_PROJECT_ID_DIFF_AMONG_RESOURCE_BIN
    ,S_DL_UNSECURE_BOOTLOADER_TO_SECURE_BB
    ,S_DL_GET_DRAM_SETTING_FAIL
    ,S_DL_FOTA_INFO_IMAGE_NUMBER_NOT_MATCH_WITH_SCATTER_FILE
    ,S_DL_PROJECT_ID_DIFF_BETWEEN_THIRD_ROM_AND_RESOURCE_BIN
    ,S_DL_FOTA_SEC_INFO_MAC_ADDR_NOT_MATCH_WITH_MAUI
    ,S_DL_PC_NFB_DUAL_BL_PAIRED_VERSION_NOT_MATCHED_WITH_MAUI
    ,S_DL_PC_NFB_DUAL_BL_FEATURE_COMBINATION_NOT_MATCHED_WITH_MAUI
    ,S_DL_PC_NOR_XIP_BL_PAIRED_VERSION_NOT_MATCHED_WITH_MAUI
    ,S_DL_PC_NOR_XIP_BL_FEATURE_COMBINATION_NOT_MATCHED_WITH_MAUI
// SV5 - MT6276
    ,S_INVALID_SCERT_FILE
    ,S_UNSUPPORTED_VER_OF_SCERT_FILE
    ,S_DL_PC_BL_FILE_TYPE_IS_DUPLICATED
    ,S_DL_PC_BL_FILE_DEV_IS_DIFFERENT
    ,S_DL_PC_BL_INVALID_GFH_FILE_INFO
    ,S_DL_PC_BL_INVALID_GFH_BL_INFO
    ,S_DL_PC_BL_INVALID_GFH_ANTI_CLONE
    ,S_DL_PMT_ERR_NO_SPACE
    ,S_DL_PC_BL_INVALID_BL_SEC_K
    ,S_DL_PC_BL_BL_SEC_K_HASH_FAIL    
    ,S_DL_WRITE_PT_FAIL
    ,S_DL_READ_PT_FAIL
    ,S_DL_BL_HASH_FAIL
    ,S_DL_BL_HASH_MISMATCH
    ,S_DL_BL_SIG_FAIL
    ,S_DL_BL_SIG_MISMATCH
    ,S_DL_BL_SIG_TYPE_UNSUPPORTED
    ,S_DL_SCAT_VERSION_UNSUPPORTED
    ,S_DL_SCAT_IS_DOWNLOAD_PROP_ERR
    ,S_DL_RSC_FILE_NOT_FOUND
    ,S_DL_RSC_MAGIC_ERR
    ,S_DL_RSC_FILE_INVALID
    ,S_DL_RSC_FILE_ERR
    ,S_DL_RSC_INVALID_PARAMETER

    ,S_FTHND_ERROR_END // END 

    // security error code (6000~6999) 
    ,S_SECURITY_ERROR_BEGIN = 6000
    ,S_SECURITY_CALLBACK_SLA_CHALLENGE_FAIL = S_SECURITY_ERROR_BEGIN
    ,S_SECURITY_SLA_WRONG_AUTH_FILE
    ,S_SECURITY_SLA_INVALID_AUTH_FILE
    ,S_SECURITY_SLA_CHALLENGE_FAIL
    ,S_SECURITY_SLA_FAIL
    ,S_SECURITY_DAA_FAIL
    ,S_SECURITY_SBC_FAIL
    ,S_SECURITY_SF_SECURE_VER_CHECK_FAIL
    ,S_SECURITY_SF_HANDSET_SECURE_CUSTOM_NAME_NOT_MATCH
    ,S_SECURITY_SF_FTCFG_LOCKDOWN
    ,S_SECURITY_SF_CODE_DOWNLOAD_FORBIDDEN
    ,S_SECURITY_SF_CODE_READBACK_FORBIDDEN
    ,S_SECURITY_SF_CODE_FORMAT_FORBIDDEN
    ,S_SECURITY_SF_SEC_RO_DOWNLOAD_FORBIDDEN
    ,S_SECURITY_SF_SEC_RO_READBACK_FORBIDDEN
    ,S_SECURITY_SF_SEC_RO_FORMAT_FORBIDDEN
    ,S_SECURITY_SF_FAT_DOWNLOAD_FORBIDDEN
    ,S_SECURITY_SF_FAT_READBACK_FORBIDDEN
    ,S_SECURITY_SF_FAT_FORMAT_FORBIDDEN
    ,S_SECURITY_SF_RESTRICTED_AREA_ACCESS_FORBIDDEN
    ,S_SECURITY_SECURE_CUSTOM_NAME_NOT_MATCH_BETWEEN_AUTH_AND_DL_HANDLE
    ,S_SECURITY_DOWNLOAD_FILE_IS_CORRUPTED
    ,S_SECURITY_NOT_SUPPORT
    ,S_SECURITY_BOOTLOADER_IMAGE_SIGNATURE_FAIL
    ,S_SECURITY_BOOTLOADER_ELDER_SW_VERSION_CANNOT_BE_DOWNLOADED
    ,S_SECURITY_BOOTLOADER_IMAGE_NO_SIGNATURE
    ,S_SECURITY_BOOTLOADER_CORRUPTED_SCATTER_FILE
    ,S_SECURITY_SECURE_USB_DL_NO_MAUI_IN_SCATTER_FILE
// SV5 MT6276
    ,S_SECURITY_SEND_CERT_FAIL
    ,S_SECURITY_SEND_AUTH_FAIL
    ,S_SECURITY_GET_SEC_CONFIG_FAIL
    ,S_SECURITY_GET_ME_ID_FAIL
    ,S_BROM_GET_HW_SW_VER_FAIL
    ,S_BROM_GET_HW_CODE_FAIL

/* SV5 ANDROID { */
    ,S_SECURITY_ROM_INFO_NOT_FOUND
    ,S_SECURITY_ROM_INFO_ID_MISMATCH
    ,S_SECURITY_SEC_CTRL_ID_MISMATCH   
    ,S_SECURITY_SEC_KEY_ID_MISMATCH

    ,S_SECURITY_SECURE_USB_DL_FAIL    
    ,S_SECURITY_SECURE_USB_DL_CHECK_TARGET_STATUS_FAIL  
    ,S_SECURITY_SECURE_USB_DL_SEND_CHIP_STATUS_FAIL      
    ,S_SECURITY_SECURE_USB_DL_DISABLED
    ,S_SECURITY_SECURE_USB_DL_ENABLED   
    
    ,S_SECURITY_SECURE_USB_DL_IMAGE_PUBLIC_N_KEY_READ_FAIL
    ,S_SECURITY_SECURE_USB_DL_IMAGE_PUBLIC_E_KEY_READ_FAIL
    ,S_SECURITY_SECURE_USB_DL_IMAGE_SIGN_HEADER_NOT_FOUND
    ,S_SECURITY_SECURE_USB_DL_IMGAE_SIGNATURE_VERIFY_FAIL
    ,S_SECURITY_SECURE_USB_DL_IMAGE_HASH_FAIL    
    ,S_SECURITY_SECURE_USB_DL_IMAGE_NOT_FOUND   
    ,S_SECURITY_SECURE_USB_DL_INVALID_IMAGE_ARGUMENT
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_INIT_FAIL
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_WRITE_IMAGE_NAME_FAIL
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_WRITE_IMAGE_NAME_LEN_FAIL
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_WRITE_TYPE_FAIL
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_WRITE_HEADER_FAIL
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_WRITE_IMAGE_OFFSET_FAIL    
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_WRITE_SIGNATURE_HASH_FAIL    
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_GET_CHECK_RESULT_FAIL
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_DOWNLOAD_IMAGE_INVALID
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_UNKNOWN_CHECK_RESULT
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_WRONG_OPERATION
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_INVALID_HEADER_LENGTH
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_INVALID_IMAGE_OFFSET    
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_INVALID_SIGNATURE_LENGTH    
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_SIGNATURE_LENGTH_TOO_LARGE
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_IMAGE_NAME_LENGTH_TOO_LONG

    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_EXT_HEADER_TOO_LARGE
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_EXT_HEADER_OFFSET_INVALID    
    ,S_SECURITY_SECURE_USB_DL_IMAGE_INFO_CHECK_CMD_EXT_HEADER_SELF_COPY_FAIL    

    ,S_SECURITY_SEC_CFG_NOT_EXIST
    ,S_SECURITY_SEC_CFG_WRITE_CMD_INIT_FAIL
    ,S_SECURITY_SEC_CFG_WRONG_MAGIC_NUMBER
    ,S_SECURITY_SEC_CFG_IS_FULL_CANNOT_ADD_NEW_IMAGE 
    ,S_SECURITY_SEC_CFG_IMAGE_NOT_FOUND_SO_CANNOT_UPDATE
    ,S_SECURITY_SEC_CFG_IMAGE_CUST_NAME_MISMATCH
    ,S_SECURITY_SEC_CFG_IMAGE_CANNOT_ROLL_BACK_SW_LOAD 
    ,S_SECURITY_SEC_CFG_IMAGE_EXIST_CANNOT_CREATE_MEW_FILE
    
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_CFG_NOT_EXIST
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_MAGIC_INCORRECT    
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_CANNOT_WRITE_TO_FIRST_BLOCK
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_YAFFS2_POST_PROCESS_FAIL    
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_NAND_DEVICE
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_CANNOT_READ_BACK
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_READ_BACK_MAGIC_INCORRECT    
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_READ_BACK_ID_INCORRECT        
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_READ_BACK_STATUS_INCORRECT            
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_READ_BACK_END_PATTERN_INCORRECT        
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_SEC_CFG_CANNOT_OVERWRITE_NEXT_PARTITION
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_NAND_NOT_DETECTED    
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_EMMC_NOT_DETECTED
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_EMMC_DEVICE
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_NAND_PAGE_SIZE_NOT_SUPPORT
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_NAND_FIND_GOOD_BLK_FAIL
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_NAND_ERASE_FAIL
    ,S_SECURITY_SEC_CFG_WRITE_FAIL_UNKNOWN_DEVIE_TYPE

    ,S_SECURITY_SEC_CFG_READ_FAIL_NAND_NOT_DETECTED    
    ,S_SECURITY_SEC_CFG_READ_FAIL_EMMC_NOT_DETECTED
    ,S_SECURITY_SEC_CFG_READ_FAIL_EMMC_DEVICE
    ,S_SECURITY_SEC_CFG_READ_FAIL_NAND_PAGE_SIZE_NOT_SUPPORT
    ,S_SECURITY_SEC_CFG_READ_FAIL_NAND_FIND_GOOD_BLK_FAIL
    ,S_SECURITY_SEC_CFG_READ_FAIL_UNKNOWN_DEVIE_TYPE
    ,S_SECURITY_SEC_CFG_READ_FAIL_NAND_LOGICAL_READ_FAIL

    ,S_SECURITY_SEC_CFG_EXT_REGION_SPACE_OVERFLOW

    ,S_SECURITY_SECURE_USB_DL_ROM_INFO_UPDATE_REQUEST_FAIL
    ,S_SECURITY_SECURE_USB_DL_DA_RETURN_INVALID_TYPE
    ,S_SECURITY_SECURE_USB_DL_MOVE_IMAGE_HEADER_TO_END_FAIL
    ,S_SECURITY_SECURE_USB_DL_NO_NEED_TO_MOVE_IMAGE_HEADER
    ,S_SECURITY_SECURE_USB_DL_NO_NEED_TO_REMOVE_IMAGE_HEADER_AND_SIG

    ,S_SECURITY_CIPHER_DATA_UNALIGNED
    ,S_SECURITY_CIPHER_MODE_INVALID
    ,S_SECURITY_CIPHER_KEY_INVALID    
    ,S_SECURITY_CIPHER_INIT_FAIL
    ,S_SECURITY_CIPHER_ROM_NOT_LOADED
    ,S_SECURITY_CIPHER_DEC_FAIL
    ,S_SECURITY_CIPHER_ENC_TEST_FAIL
    ,S_SECURITY_AES_VER_INVALID    

    ,S_INVALID_IMGDEC_CFG
    ,S_SECURITY_IMGDEC_INVALID_FORCE_DEC_PARAM
    ,S_SECURITY_IMGDEC_INVALID_AES_KEY_SIZE    
    ,S_SECURITY_IMGDEC_FAIL_IMAGE_NOT_ENCRYPTED        
    ,S_SECURITY_IMGDEC_INIT_FAIL_FTH_IS_NULL
    ,S_SECURITY_IMGDEC_INIT_FAIL_DECH_IS_NULL    

    ,S_SECURITY_INIDEC_FAIL_INI_NOT_ENCRYPTED            
    ,S_SECURITY_INIDEC_INVALID_AES_KEY_SIZE

    ,S_SECURITY_INVALID_PROJECT

    ,S_SECURITY_SECRO_ANTICLONE_LENGTH_INVALID
    ,S_SECURITY_SECRO_HASH_INCORRECT
    ,S_SECURITY_SECRO_ENCRYPT_FAIL

    ,S_SECURITY_AC_REGION_NOT_FOUND_IN_SECROIMG
/* SV5 ANDROID } */
    
    ,S_SECURITY_ERROR_END // END 

    // common error code (7000 ~ 7999) 
    ,S_EPP_COMMON_ERROR_BEGIN = 7000    
    ,S_EPP_FAIL = S_EPP_COMMON_ERROR_BEGIN
    ,S_EPP_EXT_DRAM_NOT_FOUND
    ,S_EPP_EXT_DRAM_INIT_FAIL
    ,S_EPP_NO_EMI_CONFIG_PARAM_FAIL
    ,S_EPP_ERROR_END // END     

    //For Preloader command
    ,S_PL_MODE_UNSUPPORTED = 10001
    ,S_PL_MODE_FORBIDDEN
    ,S_PL_MODE_INVALID_ARGUMETS
    ,S_PL_READ_FAIL
    ,S_PL_WRITE_FAIL
    ,S_PL_READ_TIMEOUT
    ,S_PL_WRITE_TIMEOUT
    ,S_PL_DISC_CMD_NEEDED

    //beging of status_ex, for new arch lib & DA, begin from 0xC0010001
	,STATUS_ERR                      = 0xC0010001
	,STATUS_ABORT                    = 0xC0010002
	,STATUS_UNSUPPORT_CMD            = 0xC0010003
	,STATUS_UNSUPPORT_CTRL_CODE	     = 0xC0010004
	,STATUS_PROTOCOL_ERR             = 0xC0010005
	,STATUS_PROTOCOL_BUFFER_OVERFLOW = 0xC0010006
	,STATUS_INSUFFICIENT_BUFFER      = 0xC0010007
	,STATUS_USB_SCAN_ERR             = 0xC0010008
	,STATUS_INVALID_HSESSION         = 0xC0010009
	,STATUS_INVALID_SESSION          = 0xC001000A
	,STATUS_INVALID_STAGE            = 0xC001000B
	,STATUS_NOT_IMPLEMENTED          = 0xC001000C
	,STATUS_FILE_NOT_FOUND           = 0xC001000D
	,STATUS_OPEN_FILE_ERR            = 0xC001000E
	,STATUS_WRITE_FILE_ERR           = 0xC001000F
	,STATUS_READ_FILE_ERR            = 0xC0010010
	,STATUS_CREATE_FILE_ERR          = 0xC0010011
    ,STATUS_UNSUPPORT_VERSION   	 = 0xC0010012
    ,STATUS_MEM_ALLOC_FAIL   		 = 0xC0010013

	//Host command 
	,STATUS_DEVICE_CTRL_EXCEPTION             = 0xC0050001
	,STATUS_SHUTDOWN_CMD_EXCEPTION            = 0xC0050002
	,STATUS_DOWNLOAD_EXCEPTION                = 0xC0050003
	,STATUS_UPLOAD_EXCEPTION                  = 0xC0050004
	,STATUS_EXT_RAM_EXCEPTION                 = 0xC0050005
	,STATUS_NOTIFY_SWITCH_USB_SPEED_EXCEPTION = 0xC0050006
	,STATUS_READ_DATA_EXCEPTION               = 0xC0050007
	,STATUS_WRITE_DATA_EXCEPTION              = 0xC0050008
	,STATUS_FORMAT_EXCEPTION                  = 0xC0050009
	,STATUS_OTP_OPERATION_EXCEPTION           = 0xC005000A
	,STATUS_SWITCH_USB_EXCEPTION              = 0xC005000B
	,STATUS_WRITE_EFUSE_EXCEPTION              = 0xC005000C
	,STATUS_READ_EFUSE_EXCEPTION              = 0xC005000D
		
	//brom
	,STATUS_BROM_CMD_STARTCMD_FAIL        = 0xC0060001
	,STATUS_BROM_GET_BBCHIP_HW_VER_FAIL   = 0xC0060002
	,STATUS_BROM_CMD_SEND_DA_FAIL         = 0xC0060003
	,STATUS_BROM_CMD_JUMP_DA_FAIL         = 0xC0060004
	,STATUS_BROM_CMD_FAIL                 = 0xC0060005
	,STATUS_CALLBACK_BROM_STAGE_FAIL      = 0xC0060006
		
	//brom info
	,STATUS_BROM_CONNECT_NOT_PL			  = 0x40060001

	//preloader
	,STATUS_PL_CMD_FAIL                   = 0xC0080001
		
	//da
	,STATUS_DA_VERSION_INCORRECT          = 0xC0070001
	,STATUS_DA_NOT_FOUND                  = 0xC0070002
	,STATUS_DA_SECTION_NOT_FOUND          = 0xC0070003
	,STATUS_DA_HASH_MISMATCH              = 0xC0070004
	,STATUS_DA_EXCEED_MAX_NUM             = 0xC0070005
		
	//Lib
	,STATUS_SCATTER_FILE_INVALID         = 0xC0030001
	,STATUS_DA_FILE_INVALID              = 0xC0030002
	,STATUS_DA_SELECTION_ERR             = 0xC0030003
	,STATUS_PRELOADER_INVALID            = 0xC0030004
	,STATUS_EMI_HDR_INVALID              = 0xC0030005
	,STATUS_STORAGE_MISMATCH             = 0xC0030006
	,STATUS_INVALID_PARAMETERS           = 0xC0030007
	,STATUS_INVALID_GPT                  = 0xC0030008
	,STATUS_INVALID_PMT                  = 0xC0030009
	,STATUS_LAYOUT_CHANGED               = 0xC003000A
	,STATUS_INVALID_FORMAT_PARAMETER     = 0xC003000B
	,STATUS_UNKNOWN_STORAGE_SECTION_TYPE = 0xC003000C
	,STATUS_UNKNOWN_SCATTER_FIELD 		 = 0xC003000D
	,STATUS_PARTITION_TBL_NOT_EXIST      = 0xC003000E
	,STATUS_SCATTER_HW_CHIP_ID_MISMATCH  = 0xC003000F
	,STATUS_SEC_CERT_FILE_NOT_FOUND      = 0xC0030010
	,STATUS_SEC_AUTH_FILE_NOT_FOUND      = 0xC0030011
	,STATUS_SEC_AUTH_FILE_NEEDED         = 0xC0030012
	,STATUS_EMI_CONTAINER_FILE_NOT_FOUND = 0xC0030013
	,STATUS_SCATTER_FILE_NOT_FOUND       = 0xC0030014
	,STATUS_XML_FILE_OP_ERR         	 = 0xC0030015
	,STATUS_UNSUPPORTED_PAGE_SIZE      	 = 0xC0030016
	,STATUS_EMI_INFO_LEN_OFFSET_INVALID	 = 0xC0030017	
	,STATUS_EMI_INFO_LEN_INVALID		 = 0xC0030018
	,STATUS_UNSUPPORT_STORAGE            = 0xC0030019
    ,STATUS_RSC_MAGIC_ERR                = 0xC003001A
    ,STATUS_CERT_INVALID                 = 0xC003001B
    ,STATUS_STOR_LIFE_WARN         = 0xC003001C
    ,STATUS_STOR_LIFE_EXHAUST    = 0xC003001D
    
	//device info
	,STATUS_SPARSE_INCOMPLETE            = 0x40040001
	,STATUS_OTP_LOCKED                   = 0x40040002
	,STATUS_OTP_UNLOCKED                 = 0x40040003
	,STATUS_CONTINUE                     = 0x40040004
	,STATUS_COMPLETE                     = 0x40040005
	,STATUS_DRAM_REPAIR_COMPLETE          = 0x40040006
	
	//device err
	,STATUS_UNSUPPORT_OP                 = 0xC0040001
	,STATUS_THREAD                       = 0xC0040002
	,STATUS_CHECKSUM_ERR                 = 0xC0040003
	,STATUS_TOO_LARGE                    = 0xC0040004
	,STATUS_UNKNOWN_SPARSE_CHUNK_TYPE    = 0xC0040005
	,STATUS_PARTITON_NOT_FOUND           = 0xC0040006
	,STATUS_READ_PT_FAIL                 = 0xC0040007
	,STATUS_EXCEED_MAX_PART_NUM          = 0xC0040008
	,STATUS_UNKNOWN_STORAGE_TYPE         = 0xC0040009
	,STATUS_DRAM_TEST_FAILED             = 0xC004000A
	,STATUS_EXCEED_AVALIABLE_RANGE       = 0xC004000B
	,STATUS_WRITE_SPARSE_IMAGE_FAIL      = 0xC004000C
	,STATUS_REG_PERMISSION_DENIED        = 0xC004000D
	,STATUS_PL_NOT_FOUND                 = 0xC004000E
	
	//emmc err
	,STATUS_MMC_ERR                      = 0xC0040030

	//nand err
	,STATUS_NAND_ERR                     = 0xC0040040
    ,STATUS_NAND_IN_PROGRESS             = 0xC0040041
    ,STATUS_NAND_TIMEOUT                 = 0xC0040042
    ,STATUS_NAND_BAD_BLOCK               = 0xC0040043
    ,STATUS_NAND_ERASE_FAILED            = 0xC0040044
    ,STATUS_NAND_PAGE_PROGRAM_FAILED     = 0xC0040045
    ,STATUS_NAND_FTL_OFFSET_JUMP_NEXT    = 0xC0040046
		
	//DRAM init error
	,STATUS_EMI_SETTING_VERSION_ERROR    = 0xC0040050

	//otp
	,STATUS_DA_OTP_NOT_SUPPORT           = 0xC0040100
	,STATUS_DA_OTP_LOCK_FAIL             = 0xC0040102

	//efuse
	,STATUS_EFUSE_UNKNOWN_ERR                  = 0xC0040200
	,STATUS_EFUSE_WRITE_TIMEOUT_WITHOUT_VERIFY = 0xC0040201
	,STATUS_EFUSE_BLOWN_DONE                   = 0xC0040202
	,STATUS_EFUSE_REVERT_BIT                   = 0xC0040203
	,STATUS_EFUSE_BLOWN_PARTLY                 = 0xC0040204
	,STATUS_EFUSE_INVALID_ARGUMENT             = 0xC0040205
	,STATUS_EFUSE_VALUE_IS_NOT_ZERO            = 0xC0040206
	,STATUS_EFUSE_BLOWN_INCORRECT_DATA         = 0xC0040207
	,STATUS_EFUSE_BROKEN                       = 0xC0040208
	,STATUS_EFUSE_BLOW_ERR                     = 0xC0040209
	,STATUS_EFUSE_DATA_PROCESS_ERR             = 0xC004020A
	,STATUS_EFUSE_UNLOCK_BPKEY_ERR             = 0xC004020B
	,STATUS_EFUSE_CREATE_LIST_ERR              = 0xC004020C
	,STATUS_EFUSE_WRITE_REGISTER_ERR           = 0xC004020D
	,STATUS_EFUSE_PADDING_TYPE_MISMATCH        = 0xC004020E
	,STATUS_EFUSE_CON_LOCKED                   = 0xC004020F
	,STATUS_EFUSE_RSA_ERROR                    = 0xC0040210
	
	//emmc otp
	,STATUS_DA_EMMC_OTP_NOT_SUPPORT      = STATUS_DA_OTP_NOT_SUPPORT
	,STATUS_DA_EMMC_OTP_LOCKED 			 = STATUS_OTP_LOCKED
	,STATUS_DA_EMMC_OTP_LOCK_FAIL 		 = STATUS_DA_OTP_LOCK_FAIL
	,STATUS_DA_EMMC_OTP_UNLOCKED   		 = STATUS_OTP_UNLOCKED
		
	//Note: need modify nand driver with error code "S_..."
	,STATUS_DA_NAND_OTP_NOT_SUPPORT 	 = STATUS_DA_OTP_NOT_SUPPORT
	,STATUS_DA_NAND_OTP_LOCKED 			 = STATUS_OTP_LOCKED
	,STATUS_DA_NAND_OTP_LOCK_FAIL 		 = STATUS_DA_OTP_LOCK_FAIL
	,STATUS_DA_NAND_OTP_UNLOCKED 		 = STATUS_OTP_UNLOCKED
		
		
	/* security */
	,STATUS_SEC_ROM_INFO_NOT_FOUND       = 0xC0020001
	,STATUS_SEC_CUST_NAME_NOT_FOUND      = 0xC0020002
	,STATUS_SEC_ROM_INFO_DEVICE_NOT_SUPPORTED = 0xC0020003
	
	,STATUS_SEC_DL_FORBIDDEN             = 0xC0020004
	,STATUS_SEC_IMG_TOO_LARGE            = 0xC0020005
	,STATUS_SEC_PL_VFY_FAIL              = 0xC0020006
	,STATUS_SEC_IMG_VFY_FAIL             = 0xC0020007
	,STATUS_SEC_HASH_OP_FAIL             = 0xC0020008
	,STATUS_SEC_HASH_BINDING_CHK_FAIL    = 0xC0020009
	,STATUS_SEC_INVALID_BUF              = 0xC002000A
	,STATUS_SEC_BINDING_HASH_NOT_AVAIL   = 0xC002000B
	,STATUS_SEC_WRITE_DATA_NOT_ALLOWED   = 0xC002000C
	,STATUS_SEC_FORMAT_NOT_ALLOWED       = 0xC002000D
	,STATUS_SEC_SV5_PUBK_AUTH_FAIL       = 0xC002000E
	,STATUS_SEC_SV5_HASH_VFY_FAIL        = 0xC002000F
	,STATUS_SEC_SV5_RSA_OP_FAIL          = 0xC0020010
	,STATUS_SEC_SV5_RSA_VFY_FAIL         = 0xC0020011
	,STATUS_SEC_SV5_GFH_NOT_FOUND        = 0xC0020012
	,STATUS_SEC_NOT_VALID_CERT1          = 0xC0020013
	,STATUS_SEC_NOT_VALID_CERT2          = 0xC0020014
	,STATUS_SEC_NOT_VALID_IMGHDR         = 0xC0020015
	,STATUS_SEC_SIG_SZ_NOT_VALID         = 0xC0020016
	,STATUS_SEC_PSS_OP_FAIL              = 0xC0020017
	,STATUS_SEC_CERT_AUTH_FAIL           = 0xC0020018
	,STATUS_SEC_PUBK_AUTH_MISMATCH_N_SIZE  = 0xC0020019
	,STATUS_SEC_PUBK_AUTH_MISMATCH_E_SIZE  = 0xC002001A
	,STATUS_SEC_PUBK_AUTH_MISMATCH_N       = 0xC002001B
	,STATUS_SEC_PUBK_AUTH_MISMATCH_E       = 0xC002001C
	,STATUS_SEC_PUBK_AUTH_MISMATCH_HASH    = 0xC002001D
	,STATUS_SEC_CERT_OBJ_NOT_FOUND         = 0xC002001E
	,STATUS_SEC_CERT_OID_NOT_FOUND         = 0xC002001F
	,STATUS_SEC_CERT_OUT_OF_RANGE          = 0xC0020020
	,STATUS_SEC_OID_NOT_MATCH              = 0xC0020021
	,STATUS_SEC_LEN_NOT_MATCH              = 0xC0020022
	,STATUS_SEC_ASN1_UNKNOWN_OP            = 0xC0020023
	,STATUS_SEC_OID_IDX_OUT_OF_RANGE       = 0xC0020024
	,STATUS_SEC_OID_TOO_LARGE              = 0xC0020025
	,STATUS_SEC_PUBK_SZ_MISMATCH           = 0xC0020026
	,STATUS_SEC_SWID_MISMATCH              = 0xC0020027
	,STATUS_SEC_HASH_SZ_MISMATCH           = 0xC0020028
	,STATUS_SEC_IMGHDR_TYPE_MISMATCH       = 0xC0020029
	,STATUS_SEC_IMG_TYPE_MISMATCH          = 0xC002002A
	,STATUS_SEC_IMGHDR_HASH_VFY_FAIL       = 0xC002002B
	,STATUS_SEC_IMG_HASH_VFY_FAIL          = 0xC002002C
	,STATUS_SEC_VIOLATE_ANTI_ROLLBACK      = 0xC002002D
	,STATUS_SEC_SECCFG_NOT_FOUND           = 0xC002002E
	,STATUS_SEC_SECCFG_MAGIC_INCORRECT     = 0xC002002F
	,STATUS_SEC_SECCFG_NOT_VALID           = 0xC0020030
	,STATUS_SEC_CIPHER_MODE_INVALID        = 0xC0020031
	,STATUS_SEC_CIPHER_KEY_INVALID         = 0xC0020032
	,STATUS_SEC_CIPHER_DATA_UNALIGNED      = 0xC0020033
	,STATUS_SEC_GFH_FILE_INFO_NOT_FOUND	   = 0xC0020034
	,STATUS_SEC_GFH_ANTI_CLONE_NOT_FOUND   = 0xC0020035
	,STATUS_SEC_GFH_SEC_CFG_NOT_FOUND      = 0xC0020036
	,STATUS_SEC_UNSUPPORTED_SOURCE_TYPE    = 0xC0020037
	,STATUS_SEC_CUST_NAME_MISMATCH         = 0xC0020038
    ,STATUS_SEC_INVALID_ADDRESS            = 0xC0020039
    ,STATUS_SEC_CERT_VER_NOT_SYNC          = 0xC0020040
    ,STATUS_SEC_SIG_NOT_SYNC               = 0xC0020041
    ,STATUS_SEC_EXT_ALL_IN_ONE_SIG_REJECT  = 0xC0020042
    ,STATUS_SEC_EXT_ALL_IN_ONE_SIG_NOT_EXIST = 0xC0020043
    ,STATUS_SEC_COMM_KEY_IS_NOT_SET		   = 0xC0020044
    ,STATUS_SEC_COMM_DEVINFO_CHK_FAIL	   = 0xC0020045
    ,STATUS_SEC_BOOTIMG_COUNT_OVERFLOW	   = 0xC0020046
    ,STATUS_SEC_SIG_NOT_FOUND			   = 0xC0020047
    ,STATUS_SEC_BOOTIMG_SPECIAL_HANDLE	   = 0xC0020048
    ,STATUS_SEC_REMOTE_SECURITY_POLICY_DISABLED	= 0xC0020049
    ,STATUS_SEC_RSA_OAEP_FAIL			   = 0xC002004A
    ,STATUS_SEC_INSUFFICIENT_BUFFER		   = 0xC002004B
    ,STATUS_SEC_IMG_VER_NOT_SYNC           = 0xC002004C
    ,STATUS_SEC_GET_OTP_VALUE_FAIL         = 0xC002004D
    ,STATUS_SEC_INVALID_UNIT_SZ            = 0xC002004E
    ,STATUS_SEC_INVALID_GROUP_IDX          = 0xC002004F
    ,STATUS_SEC_IMG_VER_OVERFLOW           = 0xC0020050
    ,STATUS_SEC_OTP_TABLE_NOT_INIT         = 0xC0020051
    ,STATUS_SEC_INVALID_PART_NAME          = 0xC0020052
    ,STATUS_SEC_INVALID_DA_VER= 0xC0020053

    //end of status_ex
	
    // expand to 32bits width 
    ,S_MAX_STATUS_WIDTH = 0x7FFFFFFF

} STATUS_E;

#define STATUS_CODE(err_code, private_err_code)\
    (((unsigned int)S_COMMON_ERROR_BEGIN<=(unsigned int)err_code)?err_code:private_err_code)

#endif
