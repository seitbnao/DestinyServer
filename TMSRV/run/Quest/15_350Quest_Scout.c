
// Tmsrv\run에 \quest폴더를 만들어서 거기에 엔피씨 파일과 같이 넣는다.
// 남는 로그는 "que,quest:퀘스트넘버 char:클리어한 캐릭터이름."의 형식을 가지고 있다.

QUEST015 NAME			    Guarda
QUEST015 POSITION			452 3912

//  base_speech는 약 10초간격으로 npc가 혼자말처럼 한다. 1~4까지 입력이 가능하며, 같은말이 자주나오게 하려면 4개모두 같은것을 입력한다
QUEST015 BASE_SPEECH-1      Olha_quem_esta_aqui!
QUEST015 BASE_SPEECH-2      Acho_que_voce_ja_ouviu_falar_dos_Kaizen...
QUEST015 BASE_SPEECH-3      Entra_aqui_rapido!_Antes_que_seja_tarde!
QUEST015 BASE_SPEECH-4      Acho_que_posso_te_confiar_essa_batalha!

//  condition은 1~4까지 입력이 가능하다
//  level 뒤에 (최소) (최대) 레벨이 온다. 20만 되도록 하려면 20 20을 입력하면 된다
//  item 인덱스 뒤의 숫자는 필요 갯수이다.
//  condition_speech는 condition에 부합되지 안는경우 뜨는 메시지이다.
QUEST015 CONDITION-1   LEVEL 191 265
QUEST015 CONDITION-1   SPEECH Ei_o_que_voce_esta_fazendo_aqui?_Volte_no_nivel_correto!
QUEST015 CONDITION-2   ISTRANS 0
QUEST015 CONDITION-2   SPEECH Apenas_mortais!
QUEST015 CONDITION-3   ITEM 4040 1
QUEST015 CONDITION-3   SPEECH Preciso_de_uma_Cura_do_Batedor!
QUEST015 CONDITION-4   ISLOG  0

// success_speech는 성공시 보상을 주며 뜨는 메시지이다
// reward는 1~8 까지 입력이 가능하며 확률의 대역폭을 입력한다
// 확률을 0~99 이며 0 99를 입력하면 100%가 되며, 1/4로 아이템을 하나 지급할경우는 아래와 같이 해야 한다
// 줄 아이템이 없으면 밑에 아이템 부분(7번)을 삭제하면 된다.
QUEST015 REWARD-1	0   99 SPEECH   A_quest_foi_iniciada!
QUEST015 REWARD-2	0   99 TELEPORT	467 3901
QUEST015 REWARD-3	0   99 DELETEITEM 4040 1
