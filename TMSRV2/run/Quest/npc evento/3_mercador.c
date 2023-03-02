
// Tmsrv\run에 \quest폴더를 만들어서 거기에 엔피씨 파일과 같이 넣는다.
// 남는 로그는 "que,quest:퀘스트넘버 char:클리어한 캐릭터이름."의 형식을 가지고 있다.

QUEST03 NAME			    Mercador
QUEST03 POSITION			2095 2089

//  base_speech는 약 10초간격으로 npc가 혼자말처럼 한다. 1~4까지 입력이 가능하며, 같은말이 자주나오게 하려면 4개모두 같은것을 입력한다
QUEST03 BASE_SPEECH-1      Eu_troco_Bau_do_tesouro_Raro_por_brindes!
QUEST03 BASE_SPEECH-1      O_bau_voce_recebe_criando_lojinha

//  condition은 1~4까지 입력이 가능하다
//  level 뒤에 (최소) (최대) 레벨이 온다. 20만 되도록 하려면 20 20을 입력하면 된다
//  item 인덱스 뒤의 숫자는 필요 갯수이다.
//  condition_speech는 condition에 부합되지 안는경우 뜨는 메시지이다.
QUEST03 CONDITION-1   ITEM 486 1
QUEST03 CONDITION-1   SPEECH Me_traga_um_Bau_do_tesouro_Raro
QUEST03 CONDITION-2   ISLOG 2


// success_speech는 성공시 보상을 주며 뜨는 메시지이다
// reward는 1~8 까지 입력이 가능하며 확률의 대역폭을 입력한다
// 확률을 0~99 이며 0 99를 입력하면 100%가 되며, 1/4로 아이템을 하나 지급할경우는 아래와 같이 해야 한다
// 줄 아이템이 없으면 밑에 아이템 부분(7번)을 삭제하면 된다.
QUEST03 REWARD-1	0   99 DELETEITEM 486 1
QUEST03 REWARD-2	0   14 QITEM 420
QUEST03 REWARD-3	15  29 QITEM 419
QUEST03 REWARD-4	30  44 QITEM 4026_61_2
QUEST03 REWARD-5	45  59 QITEM 4020
QUEST03 REWARD-6	60  74 QITEM 2406
QUEST03 REWARD-7	75  78 QITEM 4053
QUEST03 REWARD-8	79  85 QITEM 4054
QUEST03 REWARD-9	86  99 QITEM 4055