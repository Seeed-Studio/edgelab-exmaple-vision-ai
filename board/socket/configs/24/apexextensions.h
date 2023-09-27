
/* **** DO NOT EDIT - this file is generated by ARChitect2 ****
 *
 * Description: Header file declaring the compiler extensions for apex components 
 */

#ifndef _apexextensions_H_
#define _apexextensions_H_

#define APEX_COM_ARC_HARDWARE_DFSS_IO_I2C_MST0_PRESENT	1

// User extension aux register io_i2c_mst0_clken
#define AR_IO_I2C_MST0_CLKEN 0x800120c0
#pragma Aux_register(0x800120c0, name=>"io_i2c_mst0_clken")

// User extension aux register io_i2c_mst0_con
#define AR_IO_I2C_MST0_CON 0x80012000
#pragma Aux_register(0x80012000, name=>"io_i2c_mst0_con")

// User extension aux register io_i2c_mst0_tar
#define AR_IO_I2C_MST0_TAR 0x80012004
#pragma Aux_register(0x80012004, name=>"io_i2c_mst0_tar")

// User extension aux register io_i2c_mst0_data_cmd
#define AR_IO_I2C_MST0_DATA_CMD 0x80012010
#pragma Aux_register(0x80012010, name=>"io_i2c_mst0_data_cmd")

// User extension aux register io_i2c_mst0_ss_scl_hcnt
#define AR_IO_I2C_MST0_SS_SCL_HCNT 0x80012014
#pragma Aux_register(0x80012014, name=>"io_i2c_mst0_ss_scl_hcnt")

// User extension aux register io_i2c_mst0_ss_scl_lcnt
#define AR_IO_I2C_MST0_SS_SCL_LCNT 0x80012018
#pragma Aux_register(0x80012018, name=>"io_i2c_mst0_ss_scl_lcnt")

// User extension aux register io_i2c_mst0_fs_scl_hcnt
#define AR_IO_I2C_MST0_FS_SCL_HCNT 0x8001201c
#pragma Aux_register(0x8001201c, name=>"io_i2c_mst0_fs_scl_hcnt")

// User extension aux register io_i2c_mst0_fs_scl_lcnt
#define AR_IO_I2C_MST0_FS_SCL_LCNT 0x80012020
#pragma Aux_register(0x80012020, name=>"io_i2c_mst0_fs_scl_lcnt")

// User extension aux register io_i2c_mst0_intr_stat
#define AR_IO_I2C_MST0_INTR_STAT 0x8001202c
#pragma Aux_register(0x8001202c, name=>"io_i2c_mst0_intr_stat")

// User extension aux register io_i2c_mst0_intr_mask
#define AR_IO_I2C_MST0_INTR_MASK 0x80012030
#pragma Aux_register(0x80012030, name=>"io_i2c_mst0_intr_mask")

// User extension aux register io_i2c_mst0_raw_intr_stat
#define AR_IO_I2C_MST0_RAW_INTR_STAT 0x80012034
#pragma Aux_register(0x80012034, name=>"io_i2c_mst0_raw_intr_stat")

// User extension aux register io_i2c_mst0_rx_tl
#define AR_IO_I2C_MST0_RX_TL 0x80012038
#pragma Aux_register(0x80012038, name=>"io_i2c_mst0_rx_tl")

// User extension aux register io_i2c_mst0_tx_tl
#define AR_IO_I2C_MST0_TX_TL 0x8001203c
#pragma Aux_register(0x8001203c, name=>"io_i2c_mst0_tx_tl")

// User extension aux register io_i2c_mst0_clr_intr
#define AR_IO_I2C_MST0_CLR_INTR 0x80012040
#pragma Aux_register(0x80012040, name=>"io_i2c_mst0_clr_intr")

// User extension aux register io_i2c_mst0_clr_rx_under
#define AR_IO_I2C_MST0_CLR_RX_UNDER 0x80012044
#pragma Aux_register(0x80012044, name=>"io_i2c_mst0_clr_rx_under")

// User extension aux register io_i2c_mst0_clr_rx_over
#define AR_IO_I2C_MST0_CLR_RX_OVER 0x80012048
#pragma Aux_register(0x80012048, name=>"io_i2c_mst0_clr_rx_over")

// User extension aux register io_i2c_mst0_clr_tx_over
#define AR_IO_I2C_MST0_CLR_TX_OVER 0x8001204c
#pragma Aux_register(0x8001204c, name=>"io_i2c_mst0_clr_tx_over")

// User extension aux register io_i2c_mst0_clr_tx_abrt
#define AR_IO_I2C_MST0_CLR_TX_ABRT 0x80012054
#pragma Aux_register(0x80012054, name=>"io_i2c_mst0_clr_tx_abrt")

// User extension aux register io_i2c_mst0_clr_activity
#define AR_IO_I2C_MST0_CLR_ACTIVITY 0x8001205c
#pragma Aux_register(0x8001205c, name=>"io_i2c_mst0_clr_activity")

// User extension aux register io_i2c_mst0_clr_stop_det
#define AR_IO_I2C_MST0_CLR_STOP_DET 0x80012060
#pragma Aux_register(0x80012060, name=>"io_i2c_mst0_clr_stop_det")

// User extension aux register io_i2c_mst0_clr_start_det
#define AR_IO_I2C_MST0_CLR_START_DET 0x80012064
#pragma Aux_register(0x80012064, name=>"io_i2c_mst0_clr_start_det")

// User extension aux register io_i2c_mst0_enable
#define AR_IO_I2C_MST0_ENABLE 0x8001206c
#pragma Aux_register(0x8001206c, name=>"io_i2c_mst0_enable")

// User extension aux register io_i2c_mst0_status
#define AR_IO_I2C_MST0_STATUS 0x80012070
#pragma Aux_register(0x80012070, name=>"io_i2c_mst0_status")

// User extension aux register io_i2c_mst0_txflr
#define AR_IO_I2C_MST0_TXFLR 0x80012074
#pragma Aux_register(0x80012074, name=>"io_i2c_mst0_txflr")

// User extension aux register io_i2c_mst0_rxflr
#define AR_IO_I2C_MST0_RXFLR 0x80012078
#pragma Aux_register(0x80012078, name=>"io_i2c_mst0_rxflr")

// User extension aux register io_i2c_mst0_sda_hold
#define AR_IO_I2C_MST0_SDA_HOLD 0x8001207c
#pragma Aux_register(0x8001207c, name=>"io_i2c_mst0_sda_hold")

// User extension aux register io_i2c_mst0_tx_abrt_source
#define AR_IO_I2C_MST0_TX_ABRT_SOURCE 0x80012080
#pragma Aux_register(0x80012080, name=>"io_i2c_mst0_tx_abrt_source")

// User extension aux register io_i2c_mst0_enable_status
#define AR_IO_I2C_MST0_ENABLE_STATUS 0x8001209c
#pragma Aux_register(0x8001209c, name=>"io_i2c_mst0_enable_status")

// User extension aux register io_i2c_mst0_fs_spklen
#define AR_IO_I2C_MST0_FS_SPKLEN 0x800120a0
#pragma Aux_register(0x800120a0, name=>"io_i2c_mst0_fs_spklen")
#define APEX_COM_ARC_HARDWARE_DFSS_IO_I2C_MST1_PRESENT	1

// User extension aux register io_i2c_mst1_clken
#define AR_IO_I2C_MST1_CLKEN 0x800121c0
#pragma Aux_register(0x800121c0, name=>"io_i2c_mst1_clken")

// User extension aux register io_i2c_mst1_con
#define AR_IO_I2C_MST1_CON 0x80012100
#pragma Aux_register(0x80012100, name=>"io_i2c_mst1_con")

// User extension aux register io_i2c_mst1_tar
#define AR_IO_I2C_MST1_TAR 0x80012104
#pragma Aux_register(0x80012104, name=>"io_i2c_mst1_tar")

// User extension aux register io_i2c_mst1_data_cmd
#define AR_IO_I2C_MST1_DATA_CMD 0x80012110
#pragma Aux_register(0x80012110, name=>"io_i2c_mst1_data_cmd")

// User extension aux register io_i2c_mst1_ss_scl_hcnt
#define AR_IO_I2C_MST1_SS_SCL_HCNT 0x80012114
#pragma Aux_register(0x80012114, name=>"io_i2c_mst1_ss_scl_hcnt")

// User extension aux register io_i2c_mst1_ss_scl_lcnt
#define AR_IO_I2C_MST1_SS_SCL_LCNT 0x80012118
#pragma Aux_register(0x80012118, name=>"io_i2c_mst1_ss_scl_lcnt")

// User extension aux register io_i2c_mst1_fs_scl_hcnt
#define AR_IO_I2C_MST1_FS_SCL_HCNT 0x8001211c
#pragma Aux_register(0x8001211c, name=>"io_i2c_mst1_fs_scl_hcnt")

// User extension aux register io_i2c_mst1_fs_scl_lcnt
#define AR_IO_I2C_MST1_FS_SCL_LCNT 0x80012120
#pragma Aux_register(0x80012120, name=>"io_i2c_mst1_fs_scl_lcnt")

// User extension aux register io_i2c_mst1_intr_stat
#define AR_IO_I2C_MST1_INTR_STAT 0x8001212c
#pragma Aux_register(0x8001212c, name=>"io_i2c_mst1_intr_stat")

// User extension aux register io_i2c_mst1_intr_mask
#define AR_IO_I2C_MST1_INTR_MASK 0x80012130
#pragma Aux_register(0x80012130, name=>"io_i2c_mst1_intr_mask")

// User extension aux register io_i2c_mst1_raw_intr_stat
#define AR_IO_I2C_MST1_RAW_INTR_STAT 0x80012134
#pragma Aux_register(0x80012134, name=>"io_i2c_mst1_raw_intr_stat")

// User extension aux register io_i2c_mst1_rx_tl
#define AR_IO_I2C_MST1_RX_TL 0x80012138
#pragma Aux_register(0x80012138, name=>"io_i2c_mst1_rx_tl")

// User extension aux register io_i2c_mst1_tx_tl
#define AR_IO_I2C_MST1_TX_TL 0x8001213c
#pragma Aux_register(0x8001213c, name=>"io_i2c_mst1_tx_tl")

// User extension aux register io_i2c_mst1_clr_intr
#define AR_IO_I2C_MST1_CLR_INTR 0x80012140
#pragma Aux_register(0x80012140, name=>"io_i2c_mst1_clr_intr")

// User extension aux register io_i2c_mst1_clr_rx_under
#define AR_IO_I2C_MST1_CLR_RX_UNDER 0x80012144
#pragma Aux_register(0x80012144, name=>"io_i2c_mst1_clr_rx_under")

// User extension aux register io_i2c_mst1_clr_rx_over
#define AR_IO_I2C_MST1_CLR_RX_OVER 0x80012148
#pragma Aux_register(0x80012148, name=>"io_i2c_mst1_clr_rx_over")

// User extension aux register io_i2c_mst1_clr_tx_over
#define AR_IO_I2C_MST1_CLR_TX_OVER 0x8001214c
#pragma Aux_register(0x8001214c, name=>"io_i2c_mst1_clr_tx_over")

// User extension aux register io_i2c_mst1_clr_tx_abrt
#define AR_IO_I2C_MST1_CLR_TX_ABRT 0x80012154
#pragma Aux_register(0x80012154, name=>"io_i2c_mst1_clr_tx_abrt")

// User extension aux register io_i2c_mst1_clr_activity
#define AR_IO_I2C_MST1_CLR_ACTIVITY 0x8001215c
#pragma Aux_register(0x8001215c, name=>"io_i2c_mst1_clr_activity")

// User extension aux register io_i2c_mst1_clr_stop_det
#define AR_IO_I2C_MST1_CLR_STOP_DET 0x80012160
#pragma Aux_register(0x80012160, name=>"io_i2c_mst1_clr_stop_det")

// User extension aux register io_i2c_mst1_clr_start_det
#define AR_IO_I2C_MST1_CLR_START_DET 0x80012164
#pragma Aux_register(0x80012164, name=>"io_i2c_mst1_clr_start_det")

// User extension aux register io_i2c_mst1_enable
#define AR_IO_I2C_MST1_ENABLE 0x8001216c
#pragma Aux_register(0x8001216c, name=>"io_i2c_mst1_enable")

// User extension aux register io_i2c_mst1_status
#define AR_IO_I2C_MST1_STATUS 0x80012170
#pragma Aux_register(0x80012170, name=>"io_i2c_mst1_status")

// User extension aux register io_i2c_mst1_txflr
#define AR_IO_I2C_MST1_TXFLR 0x80012174
#pragma Aux_register(0x80012174, name=>"io_i2c_mst1_txflr")

// User extension aux register io_i2c_mst1_rxflr
#define AR_IO_I2C_MST1_RXFLR 0x80012178
#pragma Aux_register(0x80012178, name=>"io_i2c_mst1_rxflr")

// User extension aux register io_i2c_mst1_sda_hold
#define AR_IO_I2C_MST1_SDA_HOLD 0x8001217c
#pragma Aux_register(0x8001217c, name=>"io_i2c_mst1_sda_hold")

// User extension aux register io_i2c_mst1_tx_abrt_source
#define AR_IO_I2C_MST1_TX_ABRT_SOURCE 0x80012180
#pragma Aux_register(0x80012180, name=>"io_i2c_mst1_tx_abrt_source")

// User extension aux register io_i2c_mst1_enable_status
#define AR_IO_I2C_MST1_ENABLE_STATUS 0x8001219c
#pragma Aux_register(0x8001219c, name=>"io_i2c_mst1_enable_status")

// User extension aux register io_i2c_mst1_fs_spklen
#define AR_IO_I2C_MST1_FS_SPKLEN 0x800121a0
#pragma Aux_register(0x800121a0, name=>"io_i2c_mst1_fs_spklen")
#define APEX_COM_ARC_HARDWARE_DFSS_IO_I2C_MST2_PRESENT	1

// User extension aux register io_i2c_mst2_clken
#define AR_IO_I2C_MST2_CLKEN 0x800122c0
#pragma Aux_register(0x800122c0, name=>"io_i2c_mst2_clken")

// User extension aux register io_i2c_mst2_con
#define AR_IO_I2C_MST2_CON 0x80012200
#pragma Aux_register(0x80012200, name=>"io_i2c_mst2_con")

// User extension aux register io_i2c_mst2_tar
#define AR_IO_I2C_MST2_TAR 0x80012204
#pragma Aux_register(0x80012204, name=>"io_i2c_mst2_tar")

// User extension aux register io_i2c_mst2_data_cmd
#define AR_IO_I2C_MST2_DATA_CMD 0x80012210
#pragma Aux_register(0x80012210, name=>"io_i2c_mst2_data_cmd")

// User extension aux register io_i2c_mst2_ss_scl_hcnt
#define AR_IO_I2C_MST2_SS_SCL_HCNT 0x80012214
#pragma Aux_register(0x80012214, name=>"io_i2c_mst2_ss_scl_hcnt")

// User extension aux register io_i2c_mst2_ss_scl_lcnt
#define AR_IO_I2C_MST2_SS_SCL_LCNT 0x80012218
#pragma Aux_register(0x80012218, name=>"io_i2c_mst2_ss_scl_lcnt")

// User extension aux register io_i2c_mst2_fs_scl_hcnt
#define AR_IO_I2C_MST2_FS_SCL_HCNT 0x8001221c
#pragma Aux_register(0x8001221c, name=>"io_i2c_mst2_fs_scl_hcnt")

// User extension aux register io_i2c_mst2_fs_scl_lcnt
#define AR_IO_I2C_MST2_FS_SCL_LCNT 0x80012220
#pragma Aux_register(0x80012220, name=>"io_i2c_mst2_fs_scl_lcnt")

// User extension aux register io_i2c_mst2_intr_stat
#define AR_IO_I2C_MST2_INTR_STAT 0x8001222c
#pragma Aux_register(0x8001222c, name=>"io_i2c_mst2_intr_stat")

// User extension aux register io_i2c_mst2_intr_mask
#define AR_IO_I2C_MST2_INTR_MASK 0x80012230
#pragma Aux_register(0x80012230, name=>"io_i2c_mst2_intr_mask")

// User extension aux register io_i2c_mst2_raw_intr_stat
#define AR_IO_I2C_MST2_RAW_INTR_STAT 0x80012234
#pragma Aux_register(0x80012234, name=>"io_i2c_mst2_raw_intr_stat")

// User extension aux register io_i2c_mst2_rx_tl
#define AR_IO_I2C_MST2_RX_TL 0x80012238
#pragma Aux_register(0x80012238, name=>"io_i2c_mst2_rx_tl")

// User extension aux register io_i2c_mst2_tx_tl
#define AR_IO_I2C_MST2_TX_TL 0x8001223c
#pragma Aux_register(0x8001223c, name=>"io_i2c_mst2_tx_tl")

// User extension aux register io_i2c_mst2_clr_intr
#define AR_IO_I2C_MST2_CLR_INTR 0x80012240
#pragma Aux_register(0x80012240, name=>"io_i2c_mst2_clr_intr")

// User extension aux register io_i2c_mst2_clr_rx_under
#define AR_IO_I2C_MST2_CLR_RX_UNDER 0x80012244
#pragma Aux_register(0x80012244, name=>"io_i2c_mst2_clr_rx_under")

// User extension aux register io_i2c_mst2_clr_rx_over
#define AR_IO_I2C_MST2_CLR_RX_OVER 0x80012248
#pragma Aux_register(0x80012248, name=>"io_i2c_mst2_clr_rx_over")

// User extension aux register io_i2c_mst2_clr_tx_over
#define AR_IO_I2C_MST2_CLR_TX_OVER 0x8001224c
#pragma Aux_register(0x8001224c, name=>"io_i2c_mst2_clr_tx_over")

// User extension aux register io_i2c_mst2_clr_tx_abrt
#define AR_IO_I2C_MST2_CLR_TX_ABRT 0x80012254
#pragma Aux_register(0x80012254, name=>"io_i2c_mst2_clr_tx_abrt")

// User extension aux register io_i2c_mst2_clr_activity
#define AR_IO_I2C_MST2_CLR_ACTIVITY 0x8001225c
#pragma Aux_register(0x8001225c, name=>"io_i2c_mst2_clr_activity")

// User extension aux register io_i2c_mst2_clr_stop_det
#define AR_IO_I2C_MST2_CLR_STOP_DET 0x80012260
#pragma Aux_register(0x80012260, name=>"io_i2c_mst2_clr_stop_det")

// User extension aux register io_i2c_mst2_clr_start_det
#define AR_IO_I2C_MST2_CLR_START_DET 0x80012264
#pragma Aux_register(0x80012264, name=>"io_i2c_mst2_clr_start_det")

// User extension aux register io_i2c_mst2_enable
#define AR_IO_I2C_MST2_ENABLE 0x8001226c
#pragma Aux_register(0x8001226c, name=>"io_i2c_mst2_enable")

// User extension aux register io_i2c_mst2_status
#define AR_IO_I2C_MST2_STATUS 0x80012270
#pragma Aux_register(0x80012270, name=>"io_i2c_mst2_status")

// User extension aux register io_i2c_mst2_txflr
#define AR_IO_I2C_MST2_TXFLR 0x80012274
#pragma Aux_register(0x80012274, name=>"io_i2c_mst2_txflr")

// User extension aux register io_i2c_mst2_rxflr
#define AR_IO_I2C_MST2_RXFLR 0x80012278
#pragma Aux_register(0x80012278, name=>"io_i2c_mst2_rxflr")

// User extension aux register io_i2c_mst2_sda_hold
#define AR_IO_I2C_MST2_SDA_HOLD 0x8001227c
#pragma Aux_register(0x8001227c, name=>"io_i2c_mst2_sda_hold")

// User extension aux register io_i2c_mst2_tx_abrt_source
#define AR_IO_I2C_MST2_TX_ABRT_SOURCE 0x80012280
#pragma Aux_register(0x80012280, name=>"io_i2c_mst2_tx_abrt_source")

// User extension aux register io_i2c_mst2_enable_status
#define AR_IO_I2C_MST2_ENABLE_STATUS 0x8001229c
#pragma Aux_register(0x8001229c, name=>"io_i2c_mst2_enable_status")

// User extension aux register io_i2c_mst2_fs_spklen
#define AR_IO_I2C_MST2_FS_SPKLEN 0x800122a0
#pragma Aux_register(0x800122a0, name=>"io_i2c_mst2_fs_spklen")
#define APEX_COM_ARC_HARDWARE_DFSS_IO_I2C_SLV0_PRESENT	1

// User extension aux register io_i2c_slv0_clken
#define AR_IO_I2C_SLV0_CLKEN 0x800130c0
#pragma Aux_register(0x800130c0, name=>"io_i2c_slv0_clken")

// User extension aux register io_i2c_slv0_con
#define AR_IO_I2C_SLV0_CON 0x80013000
#pragma Aux_register(0x80013000, name=>"io_i2c_slv0_con")

// User extension aux register io_i2c_slv0_sar
#define AR_IO_I2C_SLV0_SAR 0x80013008
#pragma Aux_register(0x80013008, name=>"io_i2c_slv0_sar")

// User extension aux register io_i2c_slv0_data_cmd
#define AR_IO_I2C_SLV0_DATA_CMD 0x80013010
#pragma Aux_register(0x80013010, name=>"io_i2c_slv0_data_cmd")

// User extension aux register io_i2c_slv0_intr_stat
#define AR_IO_I2C_SLV0_INTR_STAT 0x8001302c
#pragma Aux_register(0x8001302c, name=>"io_i2c_slv0_intr_stat")

// User extension aux register io_i2c_slv0_intr_mask
#define AR_IO_I2C_SLV0_INTR_MASK 0x80013030
#pragma Aux_register(0x80013030, name=>"io_i2c_slv0_intr_mask")

// User extension aux register io_i2c_slv0_raw_intr_stat
#define AR_IO_I2C_SLV0_RAW_INTR_STAT 0x80013034
#pragma Aux_register(0x80013034, name=>"io_i2c_slv0_raw_intr_stat")

// User extension aux register io_i2c_slv0_rx_tl
#define AR_IO_I2C_SLV0_RX_TL 0x80013038
#pragma Aux_register(0x80013038, name=>"io_i2c_slv0_rx_tl")

// User extension aux register io_i2c_slv0_tx_tl
#define AR_IO_I2C_SLV0_TX_TL 0x8001303c
#pragma Aux_register(0x8001303c, name=>"io_i2c_slv0_tx_tl")

// User extension aux register io_i2c_slv0_clr_intr
#define AR_IO_I2C_SLV0_CLR_INTR 0x80013040
#pragma Aux_register(0x80013040, name=>"io_i2c_slv0_clr_intr")

// User extension aux register io_i2c_slv0_clr_rx_under
#define AR_IO_I2C_SLV0_CLR_RX_UNDER 0x80013044
#pragma Aux_register(0x80013044, name=>"io_i2c_slv0_clr_rx_under")

// User extension aux register io_i2c_slv0_clr_rx_over
#define AR_IO_I2C_SLV0_CLR_RX_OVER 0x80013048
#pragma Aux_register(0x80013048, name=>"io_i2c_slv0_clr_rx_over")

// User extension aux register io_i2c_slv0_clr_tx_over
#define AR_IO_I2C_SLV0_CLR_TX_OVER 0x8001304c
#pragma Aux_register(0x8001304c, name=>"io_i2c_slv0_clr_tx_over")

// User extension aux register io_i2c_slv0_clr_rd_req
#define AR_IO_I2C_SLV0_CLR_RD_REQ 0x80013050
#pragma Aux_register(0x80013050, name=>"io_i2c_slv0_clr_rd_req")

// User extension aux register io_i2c_slv0_clr_tx_abrt
#define AR_IO_I2C_SLV0_CLR_TX_ABRT 0x80013054
#pragma Aux_register(0x80013054, name=>"io_i2c_slv0_clr_tx_abrt")

// User extension aux register io_i2c_slv0_clr_rx_done
#define AR_IO_I2C_SLV0_CLR_RX_DONE 0x80013058
#pragma Aux_register(0x80013058, name=>"io_i2c_slv0_clr_rx_done")

// User extension aux register io_i2c_slv0_clr_activity
#define AR_IO_I2C_SLV0_CLR_ACTIVITY 0x8001305c
#pragma Aux_register(0x8001305c, name=>"io_i2c_slv0_clr_activity")

// User extension aux register io_i2c_slv0_clr_stop_det
#define AR_IO_I2C_SLV0_CLR_STOP_DET 0x80013060
#pragma Aux_register(0x80013060, name=>"io_i2c_slv0_clr_stop_det")

// User extension aux register io_i2c_slv0_clr_start_det
#define AR_IO_I2C_SLV0_CLR_START_DET 0x80013064
#pragma Aux_register(0x80013064, name=>"io_i2c_slv0_clr_start_det")

// User extension aux register io_i2c_slv0_enable
#define AR_IO_I2C_SLV0_ENABLE 0x8001306c
#pragma Aux_register(0x8001306c, name=>"io_i2c_slv0_enable")

// User extension aux register io_i2c_slv0_status
#define AR_IO_I2C_SLV0_STATUS 0x80013070
#pragma Aux_register(0x80013070, name=>"io_i2c_slv0_status")

// User extension aux register io_i2c_slv0_txflr
#define AR_IO_I2C_SLV0_TXFLR 0x80013074
#pragma Aux_register(0x80013074, name=>"io_i2c_slv0_txflr")

// User extension aux register io_i2c_slv0_rxflr
#define AR_IO_I2C_SLV0_RXFLR 0x80013078
#pragma Aux_register(0x80013078, name=>"io_i2c_slv0_rxflr")

// User extension aux register io_i2c_slv0_sda_hold
#define AR_IO_I2C_SLV0_SDA_HOLD 0x8001307c
#pragma Aux_register(0x8001307c, name=>"io_i2c_slv0_sda_hold")

// User extension aux register io_i2c_slv0_tx_abrt_source
#define AR_IO_I2C_SLV0_TX_ABRT_SOURCE 0x80013080
#pragma Aux_register(0x80013080, name=>"io_i2c_slv0_tx_abrt_source")

// User extension aux register io_i2c_slv0_sda_setup
#define AR_IO_I2C_SLV0_SDA_SETUP 0x80013094
#pragma Aux_register(0x80013094, name=>"io_i2c_slv0_sda_setup")

// User extension aux register io_i2c_slv0_enable_status
#define AR_IO_I2C_SLV0_ENABLE_STATUS 0x8001309c
#pragma Aux_register(0x8001309c, name=>"io_i2c_slv0_enable_status")

// User extension aux register io_i2c_slv0_fs_spklen
#define AR_IO_I2C_SLV0_FS_SPKLEN 0x800130a0
#pragma Aux_register(0x800130a0, name=>"io_i2c_slv0_fs_spklen")

// User extension aux register io_i2c_slv0_clr_restart_det
#define AR_IO_I2C_SLV0_CLR_RESTART_DET 0x800130a8
#pragma Aux_register(0x800130a8, name=>"io_i2c_slv0_clr_restart_det")
#define APEX_COM_ARC_HARDWARE_DFSS_IO_PDM_RX0_PRESENT	1

// User extension aux register io_pdm_rx0_pdm_en
#define AR_IO_PDM_RX0_PDM_EN 0x8001b000
#pragma Aux_register(0x8001b000, name=>"io_pdm_rx0_pdm_en")

// User extension aux register io_pdm_rx0_pdm_ren
#define AR_IO_PDM_RX0_PDM_REN 0x8001b004
#pragma Aux_register(0x8001b004, name=>"io_pdm_rx0_pdm_ren")

// User extension aux register io_pdm_rx0_cer
#define AR_IO_PDM_RX0_CER 0x8001b00c
#pragma Aux_register(0x8001b00c, name=>"io_pdm_rx0_cer")

// User extension aux register io_pdm_rx0_rxffr
#define AR_IO_PDM_RX0_RXFFR 0x8001b014
#pragma Aux_register(0x8001b014, name=>"io_pdm_rx0_rxffr")

// User extension aux register io_pdm_rx0_rer0
#define AR_IO_PDM_RX0_RER0 0x8001b028
#pragma Aux_register(0x8001b028, name=>"io_pdm_rx0_rer0")

// User extension aux register io_pdm_rx0_isr
#define AR_IO_PDM_RX0_ISR 0x8001b038
#pragma Aux_register(0x8001b038, name=>"io_pdm_rx0_isr")

// User extension aux register io_pdm_rx0_imr
#define AR_IO_PDM_RX0_IMR 0x8001b03c
#pragma Aux_register(0x8001b03c, name=>"io_pdm_rx0_imr")

// User extension aux register io_pdm_rx0_ror
#define AR_IO_PDM_RX0_ROR 0x8001b040
#pragma Aux_register(0x8001b040, name=>"io_pdm_rx0_ror")

// User extension aux register io_pdm_rx0_rfcr
#define AR_IO_PDM_RX0_RFCR 0x8001b048
#pragma Aux_register(0x8001b048, name=>"io_pdm_rx0_rfcr")

// User extension aux register io_pdm_rx0_rxdma
#define AR_IO_PDM_RX0_RXDMA 0x8001b1c0
#pragma Aux_register(0x8001b1c0, name=>"io_pdm_rx0_rxdma")

// User extension aux register io_pdm_rx0_pdm_rr
#define AR_IO_PDM_RX0_PDM_RR 0x8001b1d0
#pragma Aux_register(0x8001b1d0, name=>"io_pdm_rx0_pdm_rr")

// User extension aux register io_pdm_rx0_cic_n
#define AR_IO_PDM_RX0_CIC_N 0x8001b1d4
#pragma Aux_register(0x8001b1d4, name=>"io_pdm_rx0_cic_n")

// User extension aux register io_pdm_rx0_cic_d
#define AR_IO_PDM_RX0_CIC_D 0x8001b1d8
#pragma Aux_register(0x8001b1d8, name=>"io_pdm_rx0_cic_d")

// User extension aux register io_pdm_rx0_dcrc
#define AR_IO_PDM_RX0_DCRC 0x8001b1dc
#pragma Aux_register(0x8001b1dc, name=>"io_pdm_rx0_dcrc")

// User extension aux register io_pdm_rx0_brc_b0
#define AR_IO_PDM_RX0_BRC_B0 0x8001b1e0
#pragma Aux_register(0x8001b1e0, name=>"io_pdm_rx0_brc_b0")

// User extension aux register io_pdm_rx0_brc_clp
#define AR_IO_PDM_RX0_BRC_CLP 0x8001b1f0
#pragma Aux_register(0x8001b1f0, name=>"io_pdm_rx0_brc_clp")
#define APEX_COM_ARC_HARDWARE_DFSS_IO_SPI_SLV0_PRESENT	1

// User extension aux register io_spi_slv0_ctrlr0
#define AR_IO_SPI_SLV0_CTRLR0 0x80011000
#pragma Aux_register(0x80011000, name=>"io_spi_slv0_ctrlr0")

// User extension aux register io_spi_slv0_spien
#define AR_IO_SPI_SLV0_SPIEN 0x80011002
#pragma Aux_register(0x80011002, name=>"io_spi_slv0_spien")

// User extension aux register io_spi_slv0_txftlr
#define AR_IO_SPI_SLV0_TXFTLR 0x80011006
#pragma Aux_register(0x80011006, name=>"io_spi_slv0_txftlr")

// User extension aux register io_spi_slv0_rxftlr
#define AR_IO_SPI_SLV0_RXFTLR 0x80011007
#pragma Aux_register(0x80011007, name=>"io_spi_slv0_rxftlr")

// User extension aux register io_spi_slv0_txflr
#define AR_IO_SPI_SLV0_TXFLR 0x80011008
#pragma Aux_register(0x80011008, name=>"io_spi_slv0_txflr")

// User extension aux register io_spi_slv0_rxflr
#define AR_IO_SPI_SLV0_RXFLR 0x80011009
#pragma Aux_register(0x80011009, name=>"io_spi_slv0_rxflr")

// User extension aux register io_spi_slv0_sr
#define AR_IO_SPI_SLV0_SR 0x8001100a
#pragma Aux_register(0x8001100a, name=>"io_spi_slv0_sr")

// User extension aux register io_spi_slv0_imr
#define AR_IO_SPI_SLV0_IMR 0x8001100b
#pragma Aux_register(0x8001100b, name=>"io_spi_slv0_imr")

// User extension aux register io_spi_slv0_isr
#define AR_IO_SPI_SLV0_ISR 0x8001100c
#pragma Aux_register(0x8001100c, name=>"io_spi_slv0_isr")

// User extension aux register io_spi_slv0_risr
#define AR_IO_SPI_SLV0_RISR 0x8001100d
#pragma Aux_register(0x8001100d, name=>"io_spi_slv0_risr")

// User extension aux register io_spi_slv0_txoicr
#define AR_IO_SPI_SLV0_TXOICR 0x8001100e
#pragma Aux_register(0x8001100e, name=>"io_spi_slv0_txoicr")

// User extension aux register io_spi_slv0_rxoicr
#define AR_IO_SPI_SLV0_RXOICR 0x8001100f
#pragma Aux_register(0x8001100f, name=>"io_spi_slv0_rxoicr")

// User extension aux register io_spi_slv0_rxuicr
#define AR_IO_SPI_SLV0_RXUICR 0x80011010
#pragma Aux_register(0x80011010, name=>"io_spi_slv0_rxuicr")

// User extension aux register io_spi_slv0_icr
#define AR_IO_SPI_SLV0_ICR 0x80011012
#pragma Aux_register(0x80011012, name=>"io_spi_slv0_icr")

// User extension aux register io_spi_slv0_clken
#define AR_IO_SPI_SLV0_CLKEN 0x80011016
#pragma Aux_register(0x80011016, name=>"io_spi_slv0_clken")

// User extension aux register io_spi_slv0_dr
#define AR_IO_SPI_SLV0_DR 0x80011018
#pragma Aux_register(0x80011018, name=>"io_spi_slv0_dr")
#define APEX_COM_ARC_HARDWARE_DFSS_IO_UART0_PRESENT	1

// User extension aux register io_uart0_clken
#define AR_IO_UART0_CLKEN 0x800140c0
#pragma Aux_register(0x800140c0, name=>"io_uart0_clken")

// User extension aux register io_uart0_rbr_thr_dll
#define AR_IO_UART0_RBR_THR_DLL 0x80014000
#pragma Aux_register(0x80014000, name=>"io_uart0_rbr_thr_dll")

// User extension aux register io_uart0_ier_dlh
#define AR_IO_UART0_IER_DLH 0x80014004
#pragma Aux_register(0x80014004, name=>"io_uart0_ier_dlh")

// User extension aux register io_uart0_iir_fcr
#define AR_IO_UART0_IIR_FCR 0x80014008
#pragma Aux_register(0x80014008, name=>"io_uart0_iir_fcr")

// User extension aux register io_uart0_lcr
#define AR_IO_UART0_LCR 0x8001400c
#pragma Aux_register(0x8001400c, name=>"io_uart0_lcr")

// User extension aux register io_uart0_mcr
#define AR_IO_UART0_MCR 0x80014010
#pragma Aux_register(0x80014010, name=>"io_uart0_mcr")

// User extension aux register io_uart0_lsr
#define AR_IO_UART0_LSR 0x80014014
#pragma Aux_register(0x80014014, name=>"io_uart0_lsr")

// User extension aux register io_uart0_msr
#define AR_IO_UART0_MSR 0x80014018
#pragma Aux_register(0x80014018, name=>"io_uart0_msr")

// User extension aux register io_uart0_usr
#define AR_IO_UART0_USR 0x8001407c
#pragma Aux_register(0x8001407c, name=>"io_uart0_usr")
#define APEX_COM_ARC_HARDWARE_DFSS_IO_UART1_PRESENT	1

// User extension aux register io_uart1_clken
#define AR_IO_UART1_CLKEN 0x800141c0
#pragma Aux_register(0x800141c0, name=>"io_uart1_clken")

// User extension aux register io_uart1_rbr_thr_dll
#define AR_IO_UART1_RBR_THR_DLL 0x80014100
#pragma Aux_register(0x80014100, name=>"io_uart1_rbr_thr_dll")

// User extension aux register io_uart1_ier_dlh
#define AR_IO_UART1_IER_DLH 0x80014104
#pragma Aux_register(0x80014104, name=>"io_uart1_ier_dlh")

// User extension aux register io_uart1_iir_fcr
#define AR_IO_UART1_IIR_FCR 0x80014108
#pragma Aux_register(0x80014108, name=>"io_uart1_iir_fcr")

// User extension aux register io_uart1_lcr
#define AR_IO_UART1_LCR 0x8001410c
#pragma Aux_register(0x8001410c, name=>"io_uart1_lcr")

// User extension aux register io_uart1_mcr
#define AR_IO_UART1_MCR 0x80014110
#pragma Aux_register(0x80014110, name=>"io_uart1_mcr")

// User extension aux register io_uart1_lsr
#define AR_IO_UART1_LSR 0x80014114
#pragma Aux_register(0x80014114, name=>"io_uart1_lsr")

// User extension aux register io_uart1_msr
#define AR_IO_UART1_MSR 0x80014118
#pragma Aux_register(0x80014118, name=>"io_uart1_msr")

// User extension aux register io_uart1_usr
#define AR_IO_UART1_USR 0x8001417c
#pragma Aux_register(0x8001417c, name=>"io_uart1_usr")
#define APEX_COM_ARC_HARDWARE_DFSS_SUBSYS_BCR_PRESENT	1

// User extension aux register SUBSYS_BUILD
#define AR_SUBSYS_BUILD 0xf0
#pragma Aux_register(0xf0, name=>"SUBSYS_BUILD")

// User extension aux register SUBSYS_DSP_0_BUILD
#define AR_SUBSYS_DSP_0_BUILD 0xa00
#pragma Aux_register(0xa00, name=>"SUBSYS_DSP_0_BUILD")

// User extension aux register SUBSYS_DSP_0_CONFIG
#define AR_SUBSYS_DSP_0_CONFIG 0xa02
#pragma Aux_register(0xa02, name=>"SUBSYS_DSP_0_CONFIG")

// User extension aux register SUBSYS_IO_0_BUILD
#define AR_SUBSYS_IO_0_BUILD 0xa04
#pragma Aux_register(0xa04, name=>"SUBSYS_IO_0_BUILD")

// User extension aux register SUBSYS_IO_1_BUILD
#define AR_SUBSYS_IO_1_BUILD 0xa05
#pragma Aux_register(0xa05, name=>"SUBSYS_IO_1_BUILD")

// User extension aux register SUBSYS_IO_2_BUILD
#define AR_SUBSYS_IO_2_BUILD 0xa06
#pragma Aux_register(0xa06, name=>"SUBSYS_IO_2_BUILD")

// User extension aux register SUBSYS_UAUX_OFFSET
#define AR_SUBSYS_UAUX_OFFSET 0xa1e
#pragma Aux_register(0xa1e, name=>"SUBSYS_UAUX_OFFSET")

// User extension aux register SUBSYS_APEX_OFFSET
#define AR_SUBSYS_APEX_OFFSET 0xa1f
#pragma Aux_register(0xa1f, name=>"SUBSYS_APEX_OFFSET")
#define APEX_COM_ARC_HARDWARE_FLOATING_POINT_UNIT_PRESENT	1

// User extension aux register fpu_build
#define AR_FPU_BUILD 0xc8
#pragma Aux_register(0xc8, name=>"fpu_build")

// User extension aux register fpu_ctrl
#define AR_FPU_CTRL 0x300
#pragma Aux_register(0x300, name=>"fpu_ctrl")

// User extension aux register fpu_status
#define AR_FPU_STATUS 0x301
#pragma Aux_register(0x301, name=>"fpu_status")

// User extension instruction fsmadd
extern int fsmadd(int,int);
#pragma intrinsic(fsmadd,opcode=>6,sub_opcode=>5, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fsmsub
extern int fsmsub(int,int);
#pragma intrinsic(fsmsub,opcode=>6,sub_opcode=>6, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fsmul
extern int fsmul(int,int);
#pragma intrinsic(fsmul,opcode=>6,sub_opcode=>0, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fsadd
extern int fsadd(int,int);
#pragma intrinsic(fsadd,opcode=>6,sub_opcode=>1, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fssub
extern int fssub(int,int);
#pragma intrinsic(fssub,opcode=>6,sub_opcode=>2, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fcvt32
extern int fcvt32(int,int);
#pragma intrinsic(fcvt32,opcode=>6,sub_opcode=>8, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fsdiv
extern int fsdiv(int,int);
#pragma intrinsic(fsdiv,opcode=>6,sub_opcode=>7, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fscmp
extern int fscmp(int,int);
#pragma intrinsic(fscmp,opcode=>6,sub_opcode=>3, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fscmp
extern int fscmp_f(int,int);
#pragma intrinsic(fscmp_f,opcode=>6,sub_opcode=>3, set_flags => 1, flags => "zncv", effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fscmpf
extern int fscmpf(int,int);
#pragma intrinsic(fscmpf,opcode=>6,sub_opcode=>4, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fscmpf
extern int fscmpf_f(int,int);
#pragma intrinsic(fscmpf_f,opcode=>6,sub_opcode=>4, set_flags => 1, flags => "zncv", effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")

// User extension instruction fssqrt
extern int fssqrt(int);
#pragma intrinsic(fssqrt,opcode=>6,sub_opcode=>0, effects=>"auxreg=0xc8:is_read:is_written; auxreg=0x300:is_read:is_written; auxreg=0x301:is_read:is_written")


#endif


