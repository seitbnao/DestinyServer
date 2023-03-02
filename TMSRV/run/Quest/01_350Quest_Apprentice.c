
// Tmsrv\run에 \quest폴더를 만들어서 거기에 엔피씨 파일과 같이 넣는다.
// 남는 로그는 "que,quest:퀘스트넘버 char:클리어한 캐릭터이름."의 형식을 가지고 있다.

QUEST001 NAME			    Cav_Aprendiz
QUEST001 POSITION			4007 4007

//  base_speech는 약 10초간격으로 npc가 혼자말처럼 한다. 1~4까지 입력이 가능하며, 같은말이 자주나오게 하려면 4개모두 같은것을 입력한다
QUEST001 BASE_SPEECH-1      Acredito_que_eu_talvez_possa_te_ajudar...
QUEST001 BASE_SPEECH-2      Traga-me_15_safiras_como_tributo_por_minha_ajuda!
QUEST001 BASE_SPEECH-3      Lhe_darei_um_otimo_presente!
QUEST001 BASE_SPEECH-4      Lembre-se_de_estar_entre_os_niveis_100_e_220!

//  condition은 1~4까지 입력이 가능하다
//  level 뒤에 (최소) (최대) 레벨이 온다. 20만 되도록 하려면 20 20을 입력하면 된다
//  item 인덱스 뒤의 숫자는 필요 갯수이다.
//  condition_speech는 condition에 부합되지 안는경우 뜨는 메시지이다.
QUEST001 CONDITION-1   LEVEL 100 219
QUEST001 CONDITION-1   SPEECH Ei!_O_que_te_falei?_Volte_no_nivel_correto!
QUEST001 CONDITION-2   EQITEM 16 
QUEST001 CONDITION-2   SPEECH O_que_e_isso_nas_suas_costas?
QUEST001 CONDITION-3   ITEM 697 15
QUEST001 CONDITION-3   SPEECH Preciso_de_safiras_para_te_ajudar!
QUEST001 CONDITION-4   NOTEQUIP  16 4006
QUEST001 CONDITION-4   SPEECH  O_que_e_isso_nas_suas_costas?
QUEST001 CONDITION-5   ISLOG  1


// success_speech는 성공시 보상을 주며 뜨는 메시지이다
// reward는 1~8 까지 입력이 가능하며 확률의 대역폭을 입력한다
// 확률을 0~99 이며 0 99를 입력하면 100%가 되며, 1/4로 아이템을 하나 지급할경우는 아래와 같이 해야 한다
// 줄 아이템이 없으면 밑에 아이템 부분(7번)을 삭제하면 된다.
QUEST001 REWARD-1	0   99 SPEECH   Lhe_serviu_muito_bem_esse_manto!
QUEST001 REWARD-2	0   99 EQUIP  16 4006
QUEST001 REWARD-3	0   99 DELETEITEM 697 15