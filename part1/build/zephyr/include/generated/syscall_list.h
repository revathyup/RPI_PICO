/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_ATOMIC_ADD 0
#define K_SYSCALL_ATOMIC_AND 1
#define K_SYSCALL_ATOMIC_CAS 2
#define K_SYSCALL_ATOMIC_NAND 3
#define K_SYSCALL_ATOMIC_OR 4
#define K_SYSCALL_ATOMIC_PTR_CAS 5
#define K_SYSCALL_ATOMIC_PTR_SET 6
#define K_SYSCALL_ATOMIC_SET 7
#define K_SYSCALL_ATOMIC_SUB 8
#define K_SYSCALL_ATOMIC_XOR 9
#define K_SYSCALL_DEVICE_GET_BINDING 10
#define K_SYSCALL_DEVICE_GET_BY_DT_NODELABEL 11
#define K_SYSCALL_DEVICE_INIT 12
#define K_SYSCALL_DEVICE_IS_READY 13
#define K_SYSCALL_GPIO_GET_PENDING_INT 14
#define K_SYSCALL_GPIO_PIN_CONFIGURE 15
#define K_SYSCALL_GPIO_PIN_GET_CONFIG 16
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 17
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 18
#define K_SYSCALL_GPIO_PORT_GET_DIRECTION 19
#define K_SYSCALL_GPIO_PORT_GET_RAW 20
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 21
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 22
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 23
#define K_SYSCALL_K_BUSY_WAIT 24
#define K_SYSCALL_K_CONDVAR_BROADCAST 25
#define K_SYSCALL_K_CONDVAR_INIT 26
#define K_SYSCALL_K_CONDVAR_SIGNAL 27
#define K_SYSCALL_K_CONDVAR_WAIT 28
#define K_SYSCALL_K_EVENT_CLEAR 29
#define K_SYSCALL_K_EVENT_INIT 30
#define K_SYSCALL_K_EVENT_POST 31
#define K_SYSCALL_K_EVENT_SET 32
#define K_SYSCALL_K_EVENT_SET_MASKED 33
#define K_SYSCALL_K_EVENT_WAIT 34
#define K_SYSCALL_K_EVENT_WAIT_ALL 35
#define K_SYSCALL_K_FLOAT_DISABLE 36
#define K_SYSCALL_K_FLOAT_ENABLE 37
#define K_SYSCALL_K_FUTEX_WAIT 38
#define K_SYSCALL_K_FUTEX_WAKE 39
#define K_SYSCALL_K_IS_PREEMPT_THREAD 40
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 41
#define K_SYSCALL_K_MSGQ_GET 42
#define K_SYSCALL_K_MSGQ_GET_ATTRS 43
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 44
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 45
#define K_SYSCALL_K_MSGQ_PEEK 46
#define K_SYSCALL_K_MSGQ_PEEK_AT 47
#define K_SYSCALL_K_MSGQ_PURGE 48
#define K_SYSCALL_K_MSGQ_PUT 49
#define K_SYSCALL_K_MUTEX_INIT 50
#define K_SYSCALL_K_MUTEX_LOCK 51
#define K_SYSCALL_K_MUTEX_UNLOCK 52
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 53
#define K_SYSCALL_K_OBJECT_ALLOC 54
#define K_SYSCALL_K_OBJECT_ALLOC_SIZE 55
#define K_SYSCALL_K_OBJECT_RELEASE 56
#define K_SYSCALL_K_PIPE_ALLOC_INIT 57
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 58
#define K_SYSCALL_K_PIPE_CLOSE 59
#define K_SYSCALL_K_PIPE_FLUSH 60
#define K_SYSCALL_K_PIPE_GET 61
#define K_SYSCALL_K_PIPE_INIT 62
#define K_SYSCALL_K_PIPE_PUT 63
#define K_SYSCALL_K_PIPE_READ 64
#define K_SYSCALL_K_PIPE_READ_AVAIL 65
#define K_SYSCALL_K_PIPE_RESET 66
#define K_SYSCALL_K_PIPE_WRITE 67
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 68
#define K_SYSCALL_K_POLL 69
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 70
#define K_SYSCALL_K_POLL_SIGNAL_INIT 71
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 72
#define K_SYSCALL_K_POLL_SIGNAL_RESET 73
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 74
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 75
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 76
#define K_SYSCALL_K_QUEUE_GET 77
#define K_SYSCALL_K_QUEUE_INIT 78
#define K_SYSCALL_K_QUEUE_IS_EMPTY 79
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 80
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 81
#define K_SYSCALL_K_RESCHEDULE 82
#define K_SYSCALL_K_SCHED_CURRENT_THREAD_QUERY 83
#define K_SYSCALL_K_SEM_COUNT_GET 84
#define K_SYSCALL_K_SEM_GIVE 85
#define K_SYSCALL_K_SEM_INIT 86
#define K_SYSCALL_K_SEM_RESET 87
#define K_SYSCALL_K_SEM_TAKE 88
#define K_SYSCALL_K_SLEEP 89
#define K_SYSCALL_K_STACK_ALLOC_INIT 90
#define K_SYSCALL_K_STACK_POP 91
#define K_SYSCALL_K_STACK_PUSH 92
#define K_SYSCALL_K_STR_OUT 93
#define K_SYSCALL_K_THREAD_ABORT 94
#define K_SYSCALL_K_THREAD_CREATE 95
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 96
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 97
#define K_SYSCALL_K_THREAD_DEADLINE_SET 98
#define K_SYSCALL_K_THREAD_JOIN 99
#define K_SYSCALL_K_THREAD_NAME_COPY 100
#define K_SYSCALL_K_THREAD_NAME_SET 101
#define K_SYSCALL_K_THREAD_PRIORITY_GET 102
#define K_SYSCALL_K_THREAD_PRIORITY_SET 103
#define K_SYSCALL_K_THREAD_RESUME 104
#define K_SYSCALL_K_THREAD_STACK_ALLOC 105
#define K_SYSCALL_K_THREAD_STACK_FREE 106
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 107
#define K_SYSCALL_K_THREAD_SUSPEND 108
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 109
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 110
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 111
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 112
#define K_SYSCALL_K_TIMER_START 113
#define K_SYSCALL_K_TIMER_STATUS_GET 114
#define K_SYSCALL_K_TIMER_STATUS_SYNC 115
#define K_SYSCALL_K_TIMER_STOP 116
#define K_SYSCALL_K_TIMER_USER_DATA_GET 117
#define K_SYSCALL_K_TIMER_USER_DATA_SET 118
#define K_SYSCALL_K_UPTIME_TICKS 119
#define K_SYSCALL_K_USLEEP 120
#define K_SYSCALL_K_WAKEUP 121
#define K_SYSCALL_K_YIELD 122
#define K_SYSCALL_LOG_BUFFERED_CNT 123
#define K_SYSCALL_LOG_FILTER_SET 124
#define K_SYSCALL_LOG_FRONTEND_FILTER_SET 125
#define K_SYSCALL_LOG_PANIC 126
#define K_SYSCALL_LOG_PROCESS 127
#define K_SYSCALL_RESET_LINE_ASSERT 128
#define K_SYSCALL_RESET_LINE_DEASSERT 129
#define K_SYSCALL_RESET_LINE_TOGGLE 130
#define K_SYSCALL_RESET_STATUS 131
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 132
#define K_SYSCALL_UART_CONFIGURE 133
#define K_SYSCALL_UART_CONFIG_GET 134
#define K_SYSCALL_UART_DRV_CMD 135
#define K_SYSCALL_UART_ERR_CHECK 136
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 137
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 138
#define K_SYSCALL_UART_IRQ_IS_PENDING 139
#define K_SYSCALL_UART_IRQ_RX_DISABLE 140
#define K_SYSCALL_UART_IRQ_RX_ENABLE 141
#define K_SYSCALL_UART_IRQ_TX_DISABLE 142
#define K_SYSCALL_UART_IRQ_TX_ENABLE 143
#define K_SYSCALL_UART_IRQ_UPDATE 144
#define K_SYSCALL_UART_LINE_CTRL_GET 145
#define K_SYSCALL_UART_LINE_CTRL_SET 146
#define K_SYSCALL_UART_POLL_IN 147
#define K_SYSCALL_UART_POLL_IN_U16 148
#define K_SYSCALL_UART_POLL_OUT 149
#define K_SYSCALL_UART_POLL_OUT_U16 150
#define K_SYSCALL_UART_RX_DISABLE 151
#define K_SYSCALL_UART_RX_ENABLE 152
#define K_SYSCALL_UART_RX_ENABLE_U16 153
#define K_SYSCALL_UART_TX 154
#define K_SYSCALL_UART_TX_ABORT 155
#define K_SYSCALL_UART_TX_U16 156
#define K_SYSCALL_ZEPHYR_FPUTC 157
#define K_SYSCALL_ZEPHYR_FWRITE 158
#define K_SYSCALL_ZEPHYR_READ_STDIN 159
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 160
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_0 161
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_1 162
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_2 163
#define K_SYSCALL_Z_LOG_MSG_STATIC_CREATE 164
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 165
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 166
#define K_SYSCALL_BAD 167
#define K_SYSCALL_LIMIT 168


/* Following syscalls are not used in image */
#define K_SYSCALL_ADC_CHANNEL_SETUP 169
#define K_SYSCALL_ADC_READ 170
#define K_SYSCALL_ADC_READ_ASYNC 171
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_GET 172
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_SET 173
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_GET 174
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_SET 175
#define K_SYSCALL_AUXDISPLAY_CAPABILITIES_GET 176
#define K_SYSCALL_AUXDISPLAY_CLEAR 177
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_GET 178
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_SET 179
#define K_SYSCALL_AUXDISPLAY_CURSOR_SET_ENABLED 180
#define K_SYSCALL_AUXDISPLAY_CURSOR_SHIFT_SET 181
#define K_SYSCALL_AUXDISPLAY_CUSTOM_CHARACTER_SET 182
#define K_SYSCALL_AUXDISPLAY_CUSTOM_COMMAND 183
#define K_SYSCALL_AUXDISPLAY_DISPLAY_OFF 184
#define K_SYSCALL_AUXDISPLAY_DISPLAY_ON 185
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_GET 186
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_SET 187
#define K_SYSCALL_AUXDISPLAY_IS_BUSY 188
#define K_SYSCALL_AUXDISPLAY_POSITION_BLINKING_SET_ENABLED 189
#define K_SYSCALL_AUXDISPLAY_WRITE 190
#define K_SYSCALL_BBRAM_CHECK_INVALID 191
#define K_SYSCALL_BBRAM_CHECK_POWER 192
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 193
#define K_SYSCALL_BBRAM_GET_SIZE 194
#define K_SYSCALL_BBRAM_READ 195
#define K_SYSCALL_BBRAM_WRITE 196
#define K_SYSCALL_BC12_SET_RESULT_CB 197
#define K_SYSCALL_BC12_SET_ROLE 198
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 199
#define K_SYSCALL_CAN_CALC_TIMING 200
#define K_SYSCALL_CAN_CALC_TIMING_DATA 201
#define K_SYSCALL_CAN_GET_BITRATE_MAX 202
#define K_SYSCALL_CAN_GET_BITRATE_MIN 203
#define K_SYSCALL_CAN_GET_CAPABILITIES 204
#define K_SYSCALL_CAN_GET_CORE_CLOCK 205
#define K_SYSCALL_CAN_GET_MAX_FILTERS 206
#define K_SYSCALL_CAN_GET_MODE 207
#define K_SYSCALL_CAN_GET_STATE 208
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 209
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 210
#define K_SYSCALL_CAN_GET_TIMING_MAX 211
#define K_SYSCALL_CAN_GET_TIMING_MIN 212
#define K_SYSCALL_CAN_GET_TRANSCEIVER 213
#define K_SYSCALL_CAN_RECOVER 214
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 215
#define K_SYSCALL_CAN_SEND 216
#define K_SYSCALL_CAN_SET_BITRATE 217
#define K_SYSCALL_CAN_SET_BITRATE_DATA 218
#define K_SYSCALL_CAN_SET_MODE 219
#define K_SYSCALL_CAN_SET_TIMING 220
#define K_SYSCALL_CAN_SET_TIMING_DATA 221
#define K_SYSCALL_CAN_START 222
#define K_SYSCALL_CAN_STATS_GET_ACK_ERRORS 223
#define K_SYSCALL_CAN_STATS_GET_BIT0_ERRORS 224
#define K_SYSCALL_CAN_STATS_GET_BIT1_ERRORS 225
#define K_SYSCALL_CAN_STATS_GET_BIT_ERRORS 226
#define K_SYSCALL_CAN_STATS_GET_CRC_ERRORS 227
#define K_SYSCALL_CAN_STATS_GET_FORM_ERRORS 228
#define K_SYSCALL_CAN_STATS_GET_RX_OVERRUNS 229
#define K_SYSCALL_CAN_STATS_GET_STUFF_ERRORS 230
#define K_SYSCALL_CAN_STOP 231
#define K_SYSCALL_CHARGER_CHARGE_ENABLE 232
#define K_SYSCALL_CHARGER_GET_PROP 233
#define K_SYSCALL_CHARGER_SET_PROP 234
#define K_SYSCALL_COMPARATOR_GET_OUTPUT 235
#define K_SYSCALL_COMPARATOR_SET_TRIGGER 236
#define K_SYSCALL_COMPARATOR_TRIGGER_IS_PENDING 237
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 238
#define K_SYSCALL_COUNTER_GET_FREQUENCY 239
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 240
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 241
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 242
#define K_SYSCALL_COUNTER_GET_PENDING_INT 243
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 244
#define K_SYSCALL_COUNTER_GET_VALUE 245
#define K_SYSCALL_COUNTER_GET_VALUE_64 246
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 247
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 248
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 249
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 250
#define K_SYSCALL_COUNTER_START 251
#define K_SYSCALL_COUNTER_STOP 252
#define K_SYSCALL_COUNTER_TICKS_TO_US 253
#define K_SYSCALL_COUNTER_US_TO_TICKS 254
#define K_SYSCALL_DAC_CHANNEL_SETUP 255
#define K_SYSCALL_DAC_WRITE_VALUE 256
#define K_SYSCALL_DEVMUX_SELECT_GET 257
#define K_SYSCALL_DEVMUX_SELECT_SET 258
#define K_SYSCALL_DMA_CHAN_FILTER 259
#define K_SYSCALL_DMA_RELEASE_CHANNEL 260
#define K_SYSCALL_DMA_REQUEST_CHANNEL 261
#define K_SYSCALL_DMA_RESUME 262
#define K_SYSCALL_DMA_START 263
#define K_SYSCALL_DMA_STOP 264
#define K_SYSCALL_DMA_SUSPEND 265
#define K_SYSCALL_EEPROM_GET_SIZE 266
#define K_SYSCALL_EEPROM_READ 267
#define K_SYSCALL_EEPROM_WRITE 268
#define K_SYSCALL_EMUL_FUEL_GAUGE_IS_BATTERY_CUTOFF 269
#define K_SYSCALL_EMUL_FUEL_GAUGE_SET_BATTERY_CHARGING 270
#define K_SYSCALL_ENTROPY_GET_ENTROPY 271
#define K_SYSCALL_ESPI_CONFIG 272
#define K_SYSCALL_ESPI_FLASH_ERASE 273
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 274
#define K_SYSCALL_ESPI_READ_FLASH 275
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 276
#define K_SYSCALL_ESPI_READ_REQUEST 277
#define K_SYSCALL_ESPI_RECEIVE_OOB 278
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 279
#define K_SYSCALL_ESPI_SAF_ACTIVATE 280
#define K_SYSCALL_ESPI_SAF_CONFIG 281
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 282
#define K_SYSCALL_ESPI_SAF_FLASH_READ 283
#define K_SYSCALL_ESPI_SAF_FLASH_UNSUCCESS 284
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 285
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 286
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 287
#define K_SYSCALL_ESPI_SEND_OOB 288
#define K_SYSCALL_ESPI_SEND_VWIRE 289
#define K_SYSCALL_ESPI_WRITE_FLASH 290
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 291
#define K_SYSCALL_ESPI_WRITE_REQUEST 292
#define K_SYSCALL_FLASH_COPY 293
#define K_SYSCALL_FLASH_ERASE 294
#define K_SYSCALL_FLASH_EX_OP 295
#define K_SYSCALL_FLASH_FILL 296
#define K_SYSCALL_FLASH_FLATTEN 297
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 298
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 299
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 300
#define K_SYSCALL_FLASH_GET_PARAMETERS 301
#define K_SYSCALL_FLASH_GET_SIZE 302
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 303
#define K_SYSCALL_FLASH_READ 304
#define K_SYSCALL_FLASH_READ_JEDEC_ID 305
#define K_SYSCALL_FLASH_SFDP_READ 306
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 307
#define K_SYSCALL_FLASH_WRITE 308
#define K_SYSCALL_FUEL_GAUGE_BATTERY_CUTOFF 309
#define K_SYSCALL_FUEL_GAUGE_GET_BUFFER_PROP 310
#define K_SYSCALL_FUEL_GAUGE_GET_PROP 311
#define K_SYSCALL_FUEL_GAUGE_GET_PROPS 312
#define K_SYSCALL_FUEL_GAUGE_SET_PROP 313
#define K_SYSCALL_FUEL_GAUGE_SET_PROPS 314
#define K_SYSCALL_GNSS_GET_ENABLED_SYSTEMS 315
#define K_SYSCALL_GNSS_GET_FIX_RATE 316
#define K_SYSCALL_GNSS_GET_LATEST_TIMEPULSE 317
#define K_SYSCALL_GNSS_GET_NAVIGATION_MODE 318
#define K_SYSCALL_GNSS_GET_SUPPORTED_SYSTEMS 319
#define K_SYSCALL_GNSS_SET_ENABLED_SYSTEMS 320
#define K_SYSCALL_GNSS_SET_FIX_RATE 321
#define K_SYSCALL_GNSS_SET_NAVIGATION_MODE 322
#define K_SYSCALL_HAPTICS_START_OUTPUT 323
#define K_SYSCALL_HAPTICS_STOP_OUTPUT 324
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 325
#define K_SYSCALL_HWINFO_GET_DEVICE_EUI64 326
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 327
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 328
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 329
#define K_SYSCALL_HWSPINLOCK_GET_MAX_ID 330
#define K_SYSCALL_HWSPINLOCK_LOCK 331
#define K_SYSCALL_HWSPINLOCK_TRYLOCK 332
#define K_SYSCALL_HWSPINLOCK_UNLOCK 333
#define K_SYSCALL_I2C_CONFIGURE 334
#define K_SYSCALL_I2C_GET_CONFIG 335
#define K_SYSCALL_I2C_RECOVER_BUS 336
#define K_SYSCALL_I2C_TARGET_DRIVER_REGISTER 337
#define K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER 338
#define K_SYSCALL_I2C_TRANSFER 339
#define K_SYSCALL_I2S_BUF_READ 340
#define K_SYSCALL_I2S_BUF_WRITE 341
#define K_SYSCALL_I2S_CONFIGURE 342
#define K_SYSCALL_I2S_TRIGGER 343
#define K_SYSCALL_I3C_DO_CCC 344
#define K_SYSCALL_I3C_TRANSFER 345
#define K_SYSCALL_IPM_COMPLETE 346
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 347
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 348
#define K_SYSCALL_IPM_SEND 349
#define K_SYSCALL_IPM_SET_ENABLED 350
#define K_SYSCALL_IVSHMEM_ENABLE_INTERRUPTS 351
#define K_SYSCALL_IVSHMEM_GET_ID 352
#define K_SYSCALL_IVSHMEM_GET_MAX_PEERS 353
#define K_SYSCALL_IVSHMEM_GET_MEM 354
#define K_SYSCALL_IVSHMEM_GET_OUTPUT_MEM_SECTION 355
#define K_SYSCALL_IVSHMEM_GET_PROTOCOL 356
#define K_SYSCALL_IVSHMEM_GET_RW_MEM_SECTION 357
#define K_SYSCALL_IVSHMEM_GET_STATE 358
#define K_SYSCALL_IVSHMEM_GET_VECTORS 359
#define K_SYSCALL_IVSHMEM_INT_PEER 360
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 361
#define K_SYSCALL_IVSHMEM_SET_STATE 362
#define K_SYSCALL_KSCAN_CONFIG 363
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 364
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 365
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 366
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 367
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 368
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 369
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 370
#define K_SYSCALL_LED_BLINK 371
#define K_SYSCALL_LED_GET_INFO 372
#define K_SYSCALL_LED_OFF 373
#define K_SYSCALL_LED_ON 374
#define K_SYSCALL_LED_SET_BRIGHTNESS 375
#define K_SYSCALL_LED_SET_CHANNEL 376
#define K_SYSCALL_LED_SET_COLOR 377
#define K_SYSCALL_LED_WRITE_CHANNELS 378
#define K_SYSCALL_LLEXT_GET_FN_TABLE 379
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 380
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 381
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 382
#define K_SYSCALL_MBOX_MTU_GET 383
#define K_SYSCALL_MBOX_SEND 384
#define K_SYSCALL_MBOX_SET_ENABLED 385
#define K_SYSCALL_MDIO_BUS_DISABLE 386
#define K_SYSCALL_MDIO_BUS_ENABLE 387
#define K_SYSCALL_MDIO_READ 388
#define K_SYSCALL_MDIO_READ_C45 389
#define K_SYSCALL_MDIO_WRITE 390
#define K_SYSCALL_MDIO_WRITE_C45 391
#define K_SYSCALL_MSPI_CONFIG 392
#define K_SYSCALL_MSPI_DEV_CONFIG 393
#define K_SYSCALL_MSPI_GET_CHANNEL_STATUS 394
#define K_SYSCALL_MSPI_SCRAMBLE_CONFIG 395
#define K_SYSCALL_MSPI_TIMING_CONFIG 396
#define K_SYSCALL_MSPI_TRANSCEIVE 397
#define K_SYSCALL_MSPI_XIP_CONFIG 398
#define K_SYSCALL_NET_ADDR_NTOP 399
#define K_SYSCALL_NET_ADDR_PTON 400
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 401
#define K_SYSCALL_NET_IF_GET_BY_INDEX 402
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 403
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 404
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 405
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 406
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_ADDR_BY_INDEX 407
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 408
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 409
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 410
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 411
#define K_SYSCALL_NET_SOCKET_SERVICE_REGISTER 412
#define K_SYSCALL_NRF_QSPI_NOR_XIP_ENABLE 413
#define K_SYSCALL_PECI_CONFIG 414
#define K_SYSCALL_PECI_DISABLE 415
#define K_SYSCALL_PECI_ENABLE 416
#define K_SYSCALL_PECI_TRANSFER 417
#define K_SYSCALL_PS2_CONFIG 418
#define K_SYSCALL_PS2_DISABLE_CALLBACK 419
#define K_SYSCALL_PS2_ENABLE_CALLBACK 420
#define K_SYSCALL_PS2_READ 421
#define K_SYSCALL_PS2_WRITE 422
#define K_SYSCALL_PTP_CLOCK_GET 423
#define K_SYSCALL_PWM_CAPTURE_CYCLES 424
#define K_SYSCALL_PWM_DISABLE_CAPTURE 425
#define K_SYSCALL_PWM_ENABLE_CAPTURE 426
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 427
#define K_SYSCALL_PWM_SET_CYCLES 428
#define K_SYSCALL_RETAINED_MEM_CLEAR 429
#define K_SYSCALL_RETAINED_MEM_READ 430
#define K_SYSCALL_RETAINED_MEM_SIZE 431
#define K_SYSCALL_RETAINED_MEM_WRITE 432
#define K_SYSCALL_RTC_ALARM_GET_SUPPORTED_FIELDS 433
#define K_SYSCALL_RTC_ALARM_GET_TIME 434
#define K_SYSCALL_RTC_ALARM_IS_PENDING 435
#define K_SYSCALL_RTC_ALARM_SET_CALLBACK 436
#define K_SYSCALL_RTC_ALARM_SET_TIME 437
#define K_SYSCALL_RTC_GET_CALIBRATION 438
#define K_SYSCALL_RTC_GET_TIME 439
#define K_SYSCALL_RTC_SET_CALIBRATION 440
#define K_SYSCALL_RTC_SET_TIME 441
#define K_SYSCALL_RTC_UPDATE_SET_CALLBACK 442
#define K_SYSCALL_RTIO_CQE_COPY_OUT 443
#define K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER 444
#define K_SYSCALL_RTIO_RELEASE_BUFFER 445
#define K_SYSCALL_RTIO_SQE_CANCEL 446
#define K_SYSCALL_RTIO_SQE_COPY_IN_GET_HANDLES 447
#define K_SYSCALL_RTIO_SUBMIT 448
#define K_SYSCALL_SDHC_CARD_BUSY 449
#define K_SYSCALL_SDHC_CARD_PRESENT 450
#define K_SYSCALL_SDHC_DISABLE_INTERRUPT 451
#define K_SYSCALL_SDHC_ENABLE_INTERRUPT 452
#define K_SYSCALL_SDHC_EXECUTE_TUNING 453
#define K_SYSCALL_SDHC_GET_HOST_PROPS 454
#define K_SYSCALL_SDHC_HW_RESET 455
#define K_SYSCALL_SDHC_REQUEST 456
#define K_SYSCALL_SDHC_SET_IO 457
#define K_SYSCALL_SENSOR_ATTR_GET 458
#define K_SYSCALL_SENSOR_ATTR_SET 459
#define K_SYSCALL_SENSOR_CHANNEL_GET 460
#define K_SYSCALL_SENSOR_GET_DECODER 461
#define K_SYSCALL_SENSOR_RECONFIGURE_READ_IODEV 462
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 463
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 464
#define K_SYSCALL_SIP_SUPERVISORY_CALL 465
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_REQ 466
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_RES 467
#define K_SYSCALL_SIP_SVC_PLAT_FORMAT_TRANS_ID 468
#define K_SYSCALL_SIP_SVC_PLAT_FREE_ASYNC_MEMORY 469
#define K_SYSCALL_SIP_SVC_PLAT_FUNC_ID_VALID 470
#define K_SYSCALL_SIP_SVC_PLAT_GET_ERROR_CODE 471
#define K_SYSCALL_SIP_SVC_PLAT_GET_TRANS_IDX 472
#define K_SYSCALL_SIP_SVC_PLAT_UPDATE_TRANS_ID 473
#define K_SYSCALL_SMBUS_BLOCK_PCALL 474
#define K_SYSCALL_SMBUS_BLOCK_READ 475
#define K_SYSCALL_SMBUS_BLOCK_WRITE 476
#define K_SYSCALL_SMBUS_BYTE_DATA_READ 477
#define K_SYSCALL_SMBUS_BYTE_DATA_WRITE 478
#define K_SYSCALL_SMBUS_BYTE_READ 479
#define K_SYSCALL_SMBUS_BYTE_WRITE 480
#define K_SYSCALL_SMBUS_CONFIGURE 481
#define K_SYSCALL_SMBUS_GET_CONFIG 482
#define K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB 483
#define K_SYSCALL_SMBUS_PCALL 484
#define K_SYSCALL_SMBUS_QUICK 485
#define K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB 486
#define K_SYSCALL_SMBUS_WORD_DATA_READ 487
#define K_SYSCALL_SMBUS_WORD_DATA_WRITE 488
#define K_SYSCALL_SPI_RELEASE 489
#define K_SYSCALL_SPI_TRANSCEIVE 490
#define K_SYSCALL_STEPPER_ENABLE 491
#define K_SYSCALL_STEPPER_GET_ACTUAL_POSITION 492
#define K_SYSCALL_STEPPER_GET_MICRO_STEP_RES 493
#define K_SYSCALL_STEPPER_IS_MOVING 494
#define K_SYSCALL_STEPPER_MOVE_BY 495
#define K_SYSCALL_STEPPER_MOVE_TO 496
#define K_SYSCALL_STEPPER_RUN 497
#define K_SYSCALL_STEPPER_SET_EVENT_CALLBACK 498
#define K_SYSCALL_STEPPER_SET_MICROSTEP_INTERVAL 499
#define K_SYSCALL_STEPPER_SET_MICRO_STEP_RES 500
#define K_SYSCALL_STEPPER_SET_REFERENCE_POSITION 501
#define K_SYSCALL_SYSCON_GET_BASE 502
#define K_SYSCALL_SYSCON_GET_SIZE 503
#define K_SYSCALL_SYSCON_READ_REG 504
#define K_SYSCALL_SYSCON_WRITE_REG 505
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE 506
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE 507
#define K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE 508
#define K_SYSCALL_SYS_CSRAND_GET 509
#define K_SYSCALL_SYS_RAND_GET 510
#define K_SYSCALL_TEE_CANCEL 511
#define K_SYSCALL_TEE_CLOSE_SESSION 512
#define K_SYSCALL_TEE_GET_VERSION 513
#define K_SYSCALL_TEE_INVOKE_FUNC 514
#define K_SYSCALL_TEE_OPEN_SESSION 515
#define K_SYSCALL_TEE_SHM_ALLOC 516
#define K_SYSCALL_TEE_SHM_FREE 517
#define K_SYSCALL_TEE_SHM_REGISTER 518
#define K_SYSCALL_TEE_SHM_UNREGISTER 519
#define K_SYSCALL_TEE_SUPPL_RECV 520
#define K_SYSCALL_TEE_SUPPL_SEND 521
#define K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP 522
#define K_SYSCALL_TGPIO_PIN_DISABLE 523
#define K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT 524
#define K_SYSCALL_TGPIO_PIN_READ_TS_EC 525
#define K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND 526
#define K_SYSCALL_TGPIO_PORT_GET_TIME 527
#define K_SYSCALL_UPDATEHUB_AUTOHANDLER 528
#define K_SYSCALL_UPDATEHUB_CONFIRM 529
#define K_SYSCALL_UPDATEHUB_PROBE 530
#define K_SYSCALL_UPDATEHUB_REBOOT 531
#define K_SYSCALL_UPDATEHUB_UPDATE 532
#define K_SYSCALL_USER_FAULT 533
#define K_SYSCALL_W1_CHANGE_BUS_LOCK 534
#define K_SYSCALL_W1_CONFIGURE 535
#define K_SYSCALL_W1_GET_SLAVE_COUNT 536
#define K_SYSCALL_W1_READ_BIT 537
#define K_SYSCALL_W1_READ_BLOCK 538
#define K_SYSCALL_W1_READ_BYTE 539
#define K_SYSCALL_W1_RESET_BUS 540
#define K_SYSCALL_W1_SEARCH_BUS 541
#define K_SYSCALL_W1_WRITE_BIT 542
#define K_SYSCALL_W1_WRITE_BLOCK 543
#define K_SYSCALL_W1_WRITE_BYTE 544
#define K_SYSCALL_WDT_DISABLE 545
#define K_SYSCALL_WDT_FEED 546
#define K_SYSCALL_WDT_SETUP 547
#define K_SYSCALL_XTENSA_USER_FAULT 548
#define K_SYSCALL_ZSOCK_ACCEPT 549
#define K_SYSCALL_ZSOCK_BIND 550
#define K_SYSCALL_ZSOCK_CLOSE 551
#define K_SYSCALL_ZSOCK_CONNECT 552
#define K_SYSCALL_ZSOCK_FCNTL_IMPL 553
#define K_SYSCALL_ZSOCK_GETHOSTNAME 554
#define K_SYSCALL_ZSOCK_GETPEERNAME 555
#define K_SYSCALL_ZSOCK_GETSOCKNAME 556
#define K_SYSCALL_ZSOCK_GETSOCKOPT 557
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 558
#define K_SYSCALL_ZSOCK_INET_PTON 559
#define K_SYSCALL_ZSOCK_IOCTL_IMPL 560
#define K_SYSCALL_ZSOCK_LISTEN 561
#define K_SYSCALL_ZSOCK_RECVFROM 562
#define K_SYSCALL_ZSOCK_RECVMSG 563
#define K_SYSCALL_ZSOCK_SENDMSG 564
#define K_SYSCALL_ZSOCK_SENDTO 565
#define K_SYSCALL_ZSOCK_SETSOCKOPT 566
#define K_SYSCALL_ZSOCK_SHUTDOWN 567
#define K_SYSCALL_ZSOCK_SOCKET 568
#define K_SYSCALL_ZSOCK_SOCKETPAIR 569
#define K_SYSCALL_ZVFS_POLL 570
#define K_SYSCALL_ZVFS_SELECT 571
#define K_SYSCALL_Z_ERRNO 572
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 573


#ifndef _ASMLANGUAGE

#include <stdarg.h>
#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
