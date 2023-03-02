-- Hostname (Default: localhost:3306)
Hostname = "localhost:3306"

-- Username (Default: root)
Username = "root"

-- Password (Default: )
Password = "Gn0KDXpYvU3asjnt"

-- Database (Default: wyddb)
Database = "internalwyddb"

-- Tables:

--[[

Server_StartUp

int					ID				AUTO_INCREMENT
varchar(50)			date			NULL
varchar(50)			hour			NULL

Server_KeyCodes

int					ID				AUTO_INCREMENT
varchar(16)			Login			NULL
varchar(50)			Serial			NULL
varchar(50)			RewardType		0
varchar(50)			Cash			0
varchar(50)			ItemReward		0
varchar(5)			State			0
varchar(5)			PrizeType		0
varchar(50)			DateUsed		NULL
varchar(50)			HourUsed		NULL
varchar(50)			LoginUsed		NULL

Server_ItemReward
int					InternalID		AUTO_INCREMENT
int					RewardID		0
int					ItemIndex		0
int					ItemEf1			0
int					ItemEfv1		0
int					ItemEf2			0
int					ItemEfv2		0
int					ItemEf3			0
int					ItemEfv3		0
int					Active			0

Server_RewardUsage
int					InternalID		AUTO_INCREMENT
int					RewardID		0
varchar(16)			Login			NULL
varchar(50)			Date			NULL
varchar(50)			Hour			NULL

Server_AccountInfo
int					InternalID		AUTO_INCREMENT
varchar(16)			Login			UNIQUE
varchar(5)			AccState		NULL
varchar(100)		MessageToClient	NULL

Server_PremiumStore
int					InternalID		AUTO_INCREMENT
int					StoreId			0
int					ItemIndex		0
int					ItemEf1			0
int					ItemEfv1		0
int					ItemEf2			0
int					ItemEfv2		0
int					ItemEf3			0
int					ItemEfv3		0
int					Active			0
int					Price			0
int					AmountAvb		0
int					AmountRep		100
int					PurchaseType	0
int					RequiredItem	0
int					RequiredItemAm	0

Server_PremiumPurchases
int					InternalID		AUTO_INCREMENT
int					PurchaseID		0
varchar(16)			Login			NULL
varchar(50)			CashRemain		NULL
varchar(50)			Date			NULL
varchar(50)			Hour			NULL

Server_UserData
int					InternalID		AUTO_INCREMENT
varchar(16)			Login			NULL
varchar(50)			CashAmount		0
--]]

--[[

RewardType:
1 - Cash
2 - Item

PrizeType:
1 - Use once in account, use for transactions.
2 - Use once in account, global reward.

State:
0 - Not available
1 - Available
2 - Used
3 - Blocked

AccState:
0 - Confirm E-Mail
1 - Available to connect
2 - Account under review
3 - Account banned

PurchaseType:
0 - Normal Purchase with Cash with removal in AmountAvb.
1 - Purchase once in account.
2 - Purchase once in a month.
3 - Normal Purchase with Cash no removal in AmountAvb.
4 - Purchase with RequiredItem instead Cash.
--]]