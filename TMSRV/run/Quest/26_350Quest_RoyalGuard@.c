
// Tmsrv\run에 \quest폴더를 만들어서 거기에 엔피씨 파일과 같이 넣는다.
// 남는 로그는 "que,quest:퀘스트넘버 char:클리어한 캐릭터이름."의 형식을 가지고 있다.

QUEST026 NAME			    Guarda_Real@
QUEST026 POSITION			1750 1584

QUEST026 BASE_SPEECH-1      Voce_quer_se_alistar_em_um_reino?
QUEST026 BASE_SPEECH-2      Otimo!_voce_precisa_passar_no_meu_teste!
QUEST026 BASE_SPEECH-3      Traga_o_emblema_do_reino...
QUEST026 BASE_SPEECH-4      E_fale_com_o_nosso_rei!

//  condition은 1~4까지 입력이 가능하다
//  level 뒤에 (최소) (최대) 레벨이 온다. 20만 되도록 하려면 20 20을 입력하면 된다
//  item 인덱스 뒤의 숫자는 필요 갯수이다.
//  condition_speech는 condition에 부합되지 안는경우 뜨는 메시지이다.
QUEST026 CONDITION-1   LEVEL 220 250
QUEST026 CONDITION-1   SPEECH Level_inadequado!
QUEST026 CONDITION-2   ISTRANS 0
QUEST026 CONDITION-2   SPEECH Apenas_mortais!
QUEST026 CONDITION-3   ISLOG  0

// success_speech는 성공시 보상을 주며 뜨는 메시지이다
// reward는 1~8 까지 입력이 가능하며 확률의 대역폭을 입력한다
// 확률을 0~99 이며 0 99를 입력하면 100%가 되며, 1/4로 아이템을 하나 지급할경우는 아래와 같이 해야 한다
// 줄 아이템이 없으면 밑에 아이템 부분(7번)을 삭제하면 된다.
QUEST026 REWARD-1	0   99 SPEECH   O_teste_real_foi_iniciado!
QUEST026 REWARD-2	0   99 TELEPORT	1730 1726
