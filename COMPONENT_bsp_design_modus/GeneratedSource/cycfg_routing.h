/*******************************************************************************
* File Name: cycfg_routing.h
*
* Description:
* Establishes all necessary connections between hardware elements.
* This file was automatically generated and should not be modified.
* Tools Package 2.1.0.1266
* 20735B1
* personalities 1.0.0.31
* udd 1.2.0.370
*
********************************************************************************
* Copyright 2020 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "cycfg_notices.h"
static inline void init_cycfg_routing(void) {}
#define init_cycfg_connectivity() init_cycfg_routing()
#define ioss_0_pin_10_AUX UNKNOWN
#define ioss_0_pin_11_AUX UNKNOWN
#define ioss_0_pin_16_AUX UNKNOWN
#define ioss_0_pin_28_AUX UNKNOWN
#define ioss_0_pin_29_AUX UNKNOWN
#define ioss_0_pin_32_AUX UNKNOWN
#define ioss_0_pin_34_AUX UNKNOWN
#define ioss_0_pin_38_AUX UNKNOWN
#define ioss_0_pin_6_AUX UNKNOWN
#define ioss_0_pin_7_AUX UNKNOWN
#define ioss_0_pin_8_AUX UNKNOWN

#define CYBSP_A0_aux_0_TRIGGER_OUT ADC_INPUT_P8
#define CYBSP_THERM_TEMP_SENSE_aux_0_TRIGGER_OUT CYBSP_A0_aux_0_TRIGGER_OUT
#define adc_0_channel_0_TRIGGER_IN WICED_GPIO
#define i2c_0_scl_0_TRIGGER_IN WICED_I2C_1_SCL
#define i2c_0_sda_0_TRIGGER_IN WICED_I2C_1_SDA
#define spi_0_clk_0_TRIGGER_IN WICED_SPI_1_CLK
#define spi_0_cs_0_TRIGGER_IN WICED_SPI_1_CS
#define spi_0_miso_0_TRIGGER_IN WICED_SPI_1_MISO
#define spi_0_mosi_0_TRIGGER_IN WICED_SPI_1_MOSI
#define uart_1_cts_0_TRIGGER_IN WICED_UART_2_CTS
#define uart_1_rts_0_TRIGGER_IN WICED_UART_2_RTS
#define uart_1_rxd_0_TRIGGER_IN WICED_UART_2_RXD
#define uart_1_txd_0_TRIGGER_IN WICED_UART_2_TXD

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_ROUTING_H */
