#ifndef __glErrorCodeDef_h_2017_03_16__
#define __glErrorCodeDef_h_2017_03_16__

//此头文件定义打印服务器错误码



#define ERROR_CODE_BASE 0x200					//512
#define ERROR_CODE_SUCCESS						0	//成功
#define ERROR_CODE_SERVER_ERROR					(ERROR_CODE_BASE + 2)	//服务器端发生错误
#define ERROR_CODE_PARSEDATA_ERROR				(ERROR_CODE_BASE + 3)	//数据转换错误
#define ERROR_CODE_NET_ERROR					(ERROR_CODE_BASE + 4)	//网络错误
#define ERROR_CODE_NET_TIMEOUT					(ERROR_CODE_BASE + 5)	//网络请求超时
#define ERROR_CODE_PARAM_FORMAT_RRROR			(ERROR_CODE_BASE + 6)	//参数错误
#define ERROR_CODE_ALREADY_ONLINE				(ERROR_CODE_BASE + 7)	//打印站点已有用户登录
#define ERROR_CODE_USER_NOT_EXIST				(ERROR_CODE_BASE + 8)	//用户不存在
#define ERROR_CODE_EQUIP_NOT_EXIST				(ERROR_CODE_BASE + 9)	//设备不存在或不在线
#define ERROR_CODE_USER_DISABLED				(ERROR_CODE_BASE + 10)	//帐号已被禁用
#define ERROR_CODE_NO_PERMISSION_LOGON_EQUIP	(ERROR_CODE_BASE + 11)	//无权限登录该设备
#define ERROR_CODE_PWD_ERROR					(ERROR_CODE_BASE + 12)	//密码错误
#define ERROR_CODE_UNSUPPORTED					(ERROR_CODE_BASE + 13)	//不支持的
#define ERROR_CODE_NO_USER_LOGON				(ERROR_CODE_BASE + 14)	//无用户登录
#define ERROR_CODE_NO_FUN_PERMISSION			(ERROR_CODE_BASE + 15)	//无功能权限
#define ERROR_CODE_PRT_NOT_EXIST				(ERROR_CODE_BASE + 16)	//打印点未添加
#define ERROR_CODE_PRT_SETTINGS_ERR				(ERROR_CODE_BASE + 17)	//打印点配置不正确
#define ERROR_CODE_ACCOUNT_EXIST				(ERROR_CODE_BASE + 18)	//帐号已存在
#define ERROR_CODE_CARD_EXIST					(ERROR_CODE_BASE + 19)	//卡号已存在

#define ERROR_CODE_NO_PAPER						(ERROR_CODE_BASE + 20) //纸张不足，请添加纸
#define ERROR_CODE_PAGE_LIMIT					(ERROR_CODE_BASE + 26) //任务超出限额
#define ERROR_CODE_DEAL_PRINT_LIST_FAILED		(ERROR_CODE_BASE + 27) //打印列表操作失败，具体参考各个任务打印结果
#define ERROR_CODE_JOB_NOT_EXIST				(ERROR_CODE_BASE + 28) //任务不存在
#define ERROR_CODE_STORE_FILE_FAILED			(ERROR_CODE_BASE + 29) //文件保存失败
#define ERROR_CODE_DEALING_FILE					(ERROR_CODE_BASE + 30) //正在处理文件
#define ERROR_CODE_UNSUPPORTED_FILE				(ERROR_CODE_BASE + 31) //不支持的文件类型
#define ERROR_CODE_TRANSPORT_FILE_FAILED		(ERROR_CODE_BASE + 32) //发送文件失败
#define ERROR_CODE_CARD_REGISTER_FAILED			(ERROR_CODE_BASE + 33) //注册失败，请重新刷卡注册
#define ERROR_CODE_CHARGEDEBT_FAILED			(ERROR_CODE_BASE + 34) //扣除欠费失败，禁止登录
#define ERROR_CODE_NO_MONEY_PRINT				(ERROR_CODE_BASE + 35) //打印金额不足
#define ERROR_CODE_NO_MONEY_COPY				(ERROR_CODE_BASE + 36) //复印金额不足
#define ERROR_CODE_NO_MONEY_SCAN				(ERROR_CODE_BASE + 37) //扫描金额不足
#define ERROR_CODE_FILE_DOWNLOADING				(ERROR_CODE_BASE + 38) //正在缓冲文件
#define ERROR_CODE_FILE_UNDOWNLOAD				(ERROR_CODE_BASE + 39) //文件未下载
#define ERROR_CODE_FILE_PRINTING				(ERROR_CODE_BASE + 40) //文件打印中
#define ERROR_CODE_FILE_PRINTED					(ERROR_CODE_BASE + 41) //文件已打印
#define ERROR_CODE_DIFFERENT_USER				(ERROR_CODE_BASE + 42) //用户不同，停止任务

#define ERROR_CODE_CHARGE_NET_ERR				(ERROR_CODE_BASE +50) //扣费时网络错误
#define ERROR_CODE_CHARGE_NOMONEY_ACCOUNT		(ERROR_CODE_BASE +51) //扣费时账户余额不足
#define ERROR_CODE_CHARGE_CARD_ERR				(ERROR_CODE_BASE +52)//扣费时卡扣费失败
#define ERROR_CODE_CHARGE_NOCARD				(ERROR_CODE_BASE +53)//扣费时未检测到卡片，请刷卡
#define ERROR_CODE_CHARGE_PUT_CARD_BACK			(ERROR_CODE_BASE +54)//扣费时交易异常，请放回卡片!
#define ERROR_CODE_RECHARGING					(ERROR_CODE_BASE +55)//交易失败，正在重新请求交易...
#define ERROR_CODE_REQ_QRCODE_FAILED			(ERROR_CODE_BASE +56)	//二维码获取失败，请重试
#define ERROR_CODE_CHARGE_FAILED				(ERROR_CODE_BASE +57)	//扣费失败

#define ERROR_CODE_FUNDISABLED_PRINT			(ERROR_CODE_BASE + 80)	//打印功能功能未开启
#define ERROR_CODE_FUNDISABLED_COPY				(ERROR_CODE_BASE + 81)	//复印功能功能未开启
#define ERROR_CODE_FUNDISABLED_SCAN				(ERROR_CODE_BASE + 82)	//扫描功能功能未开启
#define ERROR_CODE_FUNDISABLED_USBPRINT			(ERROR_CODE_BASE + 83)	//USB打印功能功能未开启
#define ERROR_CODE_FUNDISABLED_CLOUDPRINT		(ERROR_CODE_BASE + 84)	//云打印功能功能未开启

#define ERROR_CODE_STATION_NO_COLORPRINTPERM	(ERROR_CODE_BASE + 90)	//打印点无彩色权限
#define ERROR_CODE_USER_NO_COLORPRINTPERM		(ERROR_CODE_BASE + 91)	//用户无彩色打印权限
#define ERROR_CODE_SATTION_NO_PRINTPERM			(ERROR_CODE_BASE + 92)	//打印点无打印权限
#define ERROR_CODE_USER_NO_PRINTPERM			(ERROR_CODE_BASE + 93)	//用户无打印权限
#define ERROR_CODE_NO_USER_BUT_BINDCARD			(ERROR_CODE_BASE + 94)	//卡号不存在，但可以自助绑卡
#define ERROR_CODE_NO_USER_BUT_REGUSER			(ERROR_CODE_BASE + 95)	//卡号不存在，但可以自助注册
#define ERROR_CODE_NO_USER_BUT_BINDCARD_OR_REGUSER			(ERROR_CODE_BASE + 96)	//卡号不存在，但可以自助注册或自助绑卡
#define ERROR_CODE_IRIS_MATCH_FAILED			(ERROR_CODE_BASE + 97)	//虹膜比对失败
#define ERROR_CODE_ACCOUNT_OUT_OF_DATE			(ERROR_CODE_BASE + 98)	//账户已过期失效

#define ERROR_CODE_PRINT_LIMIT_LESS				(ERROR_CODE_BASE + 100)	//打印限额不足
#define ERROR_CODE_CPOY_LIMIT_LESS				(ERROR_CODE_BASE + 101)	//复印限额不足
#define ERROR_CODE_SCAN_LIMIT_LESS				(ERROR_CODE_BASE + 102)	//扫描限额不足

#define ERROR_CODE_NETFOLDER_UNREACHABLE		(ERROR_CODE_BASE +110)	//无法连接到网络文件夹
#define ERROR_CODE_SENDSCANFILE_FAILED			(ERROR_CODE_BASE +111)	//发送扫描件失败

#define ERROR_CODE_REQ_WECHATPAY				(ERROR_CODE_BASE + 597) //正在请求微信支付

//ERROR_CODE_BASE+1000~2000为升级错误码


//ERROR_CODE_BASE+1000~2000为升级错误码



#endif //#ifndef __glErrorCodeDef_h_2017_03_15__

