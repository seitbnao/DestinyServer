
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST001 NAME			    Cav_Aprendiz
QUEST001 POSITION			4007 4007

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST001 BASE_SPEECH-1      Acredito_que_eu_talvez_possa_te_ajudar...
QUEST001 BASE_SPEECH-2      Traga-me_15_safiras_como_tributo_por_minha_ajuda!
QUEST001 BASE_SPEECH-3      Lhe_darei_um_otimo_presente!
QUEST001 BASE_SPEECH-4      Lembre-se_de_estar_entre_os_niveis_100_e_220!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST001 CONDITION-1   LEVEL 100 219
QUEST001 CONDITION-1   SPEECH Ei!_O_que_te_falei?_Volte_no_nivel_correto!
QUEST001 CONDITION-2   EQITEM 16 
QUEST001 CONDITION-2   SPEECH O_que_e_isso_nas_suas_costas?
QUEST001 CONDITION-3   ITEM 697 15
QUEST001 CONDITION-3   SPEECH Preciso_de_safiras_para_te_ajudar!
QUEST001 CONDITION-4   NOTEQUIP  16 4006
QUEST001 CONDITION-4   SPEECH  O_que_e_isso_nas_suas_costas?
QUEST001 CONDITION-5   ISLOG  1


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST001 REWARD-1	0   99 SPEECH   Lhe_serviu_muito_bem_esse_manto!
QUEST001 REWARD-2	0   99 EQUIP  16 4006
QUEST001 REWARD-3	0   99 DELETEITEM 697 15