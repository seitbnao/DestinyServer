
// Tmsrv\run에 \quest폴더를 만들어서 거기에 엔피씨 파일과 같이 넣는다.
// 남는 로그는 "que,quest:퀘스트넘버 char:클리어한 캐릭터이름."의 형식을 가지고 있다.

QUEST38 NAME			    Event_NPC_4
QUEST38 POSITION			1246 1710

//  base_speech는 약 10초간격으로 npc가 혼자말처럼 한다. 1~4까지 입력이 가능하며, 같은말이 자주나오게 하려면 4개모두 같은것을 입력한다
QUEST38 BASE_SPEECH-1      Me_Traga_a_Medalha_Roxa
QUEST38 BASE_SPEECH-2      Meu_Irmao_Esta_Em_Um_Lugar_Branco
QUEST38 BASE_SPEECH-3      Meu_Irmao_Esta_Em_Um_Lugar_Branco

//  condition은 1~4까지 입력이 가능하다
//  level 뒤에 (최소) (최대) 레벨이 온다. 20만 되도록 하려면 20 20을 입력하면 된다
//  item 인덱스 뒤의 숫자는 필요 갯수이다.
//  condition_speech는 condition에 부합되지 안는경우 뜨는 메시지이다.
QUEST38 CONDITION-1   ITEM 4052 1
QUEST38 CONDITION-1   SPEECH Traga_a_Medalha_Roxa
QUEST38 CONDITION-2   ISLOG 1


// success_speech는 성공시 보상을 주며 뜨는 메시지이다
// reward는 1~8 까지 입력이 가능하며 확률의 대역폭을 입력한다
// 확률을 0~99 이며 0 99를 입력하면 100%가 되며, 1/4로 아이템을 하나 지급할경우는 아래와 같이 해야 한다
// 줄 아이템이 없으면 밑에 아이템 부분(7번)을 삭제하면 된다.
QUEST38 REWARD-1	0   99 DELETEITEM 4052 1
QUEST38 REWARD-2	0   25 QITEM 3182_61_5
QUEST38 REWARD-3	26  49 QITEM 3461_61_10
QUEST38 REWARD-4	50  80 QITEM 4140_61_3
QUEST38 REWARD-5	81  99 QITEM 4051

