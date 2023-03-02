
// Tmsrv\run에 \quest폴더를 만들어서 거기에 엔피씨 파일과 같이 넣는다.
// 남는 로그는 "que,quest:퀘스트넘버 char:클리어한 캐릭터이름."의 형식을 가지고 있다.

QUEST32 NAME Coringa
QUEST32 POSITION 2112 2089

//  base_speech는 약 10초간격으로 npc가 혼자말처럼 한다. 1~4까지 입력이 가능하며, 같은말이 자주나오게 하려면 4개모두 같은것을 입력한다
QUEST32 BASE_SPEECH-1 Quer_Tentar_a_sorte?Traga_a_varinha_da_guerra
QUEST32 BASE_SPEECH-2 Traga_a_varinha_de_guerra_vende_no_Galford_aqui_na_cidade
QUEST32 BASE_SPEECH-3 Traga_a_varinha_de_guerra_vende_no_Galford_aqui_na_cidade
QUEST32 BASE_SPEECH-4 Traga_a_varinha_de_guerra_vende_no_Galford_aqui_na_cidade

//  condition은 1~4까지 입력이 가능하다
//  level 뒤에 (최소) (최대) 레벨이 온다. 20만 되도록 하려면 20 20을 입력하면 된다
//  item 인덱스 뒤의 숫자는 필요 갯수이다.
//  condition_speech는 condition에 부합되지 안는경우 뜨는 메시지이다.
QUEST32 CONDITION-1 ITEM 892 1
QUEST32 CONDITION-1 SPEECH Traga_a_varinha_de_guerra_vende_no_Galford_aqui_na_cidade
QUEST32 CONDITION-2 EQITEM 13
QUEST32 CONDITION-2 SPEECH Desequipe_o_traje


// success_speech는 성공시 보상을 주며 뜨는 메시지이다
// reward는 1~8 까지 입력이 가능하며 확률의 대역폭을 입력한다
// 확률을 0~99 이며 0 99를 입력하면 100%가 되며, 1/4로 아이템을 하나 지급할경우는 아래와 같이 해야 한다
// 줄 아이템이 없으면 밑에 아이템 부분(7번)을 삭제하면 된다.

QUEST32 REWARD-1 0 99 DELETEITEM 892 1
QUEST32 REWARD-3 0 99 EQUIP 13 4161_109_20_110_12_106_29
QUEST32 REWARD-2 0 25 TELEPORT 3218 1727
QUEST32 REWARD-4 25 49 TELEPORT 3218 1764
QUEST32 REWARD-6 50 74 TELEPORT 3303 1769
QUEST32 REWARD-7 75 99 TELEPORT 3303 1726

