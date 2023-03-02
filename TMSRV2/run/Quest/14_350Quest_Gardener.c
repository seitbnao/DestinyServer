
// Tmsrv\run에 \quest폴더를 만들어서 거기에 엔피씨 파일과 같이 넣는다.
// 남는 로그는 "que,quest:퀘스트넘버 char:클리어한 캐릭터이름."의 형식을 가지고 있다.

QUEST014 NAME			    Jardineiro
QUEST014 POSITION			2223 1714

//  base_speech는 약 10초간격으로 npc가 혼자말처럼 한다. 1~4까지 입력이 가능하며, 같은말이 자주나오게 하려면 4개모두 같은것을 입력한다
QUEST014 BASE_SPEECH-1      Ei!!_Preciso_de_sua_ajuda!
QUEST014 BASE_SPEECH-2      Cuide_do_Jardim_dos_Deuses_que_esta_sendo_atacado!
QUEST014 BASE_SPEECH-3      Esses_monstros_estao_destruindo_nossa_colheita!
QUEST014 BASE_SPEECH-4      Voce_sera_recompensado!

//  condition은 1~4까지 입력이 가능하다
//  level 뒤에 (최소) (최대) 레벨이 온다. 20만 되도록 하려면 20 20을 입력하면 된다
//  item 인덱스 뒤의 숫자는 필요 갯수이다.
//  condition_speech는 condition에 부합되지 안는경우 뜨는 메시지이다.
QUEST014 CONDITION-1   LEVEL 116 190
QUEST014 CONDITION-1   SPEECH Volte_no_nivel_correto!
QUEST014 CONDITION-2   ISTRANS 0
QUEST014 CONDITION-2   SPEECH Apenas_mortais!
QUEST014 CONDITION-3   ITEM 4039 1
QUEST014 CONDITION-3   SPEECH Preciso_de_uma_colheita_do_jardineiro!
QUEST014 CONDITION-4   ISLOG  0

// success_speech는 성공시 보상을 주며 뜨는 메시지이다
// reward는 1~8 까지 입력이 가능하며 확률의 대역폭을 입력한다
// 확률을 0~99 이며 0 99를 입력하면 100%가 되며, 1/4로 아이템을 하나 지급할경우는 아래와 같이 해야 한다
// 줄 아이템이 없으면 밑에 아이템 부분(7번)을 삭제하면 된다.
QUEST014 REWARD-1	0   99 SPEECH   A_quest_foi_iniciada!
QUEST014 REWARD-2	0   99 TELEPORT	2237 1714
QUEST014 REWARD-3	0   99 DELETEITEM 4039 1
