
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST013 NAME			    Coveiro
QUEST013 POSITION			2373 2097

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST013 BASE_SPEECH-1       Ei_voce_que_esta_comecando_sua_jornada!
QUEST013 BASE_SPEECH-2       Acho_que_posso_te_ajudar!
QUEST013 BASE_SPEECH-3       Traga_uma_vela_do_coveiro_e_te_mostrarei_o_caminho!
QUEST013 BASE_SPEECH-4       Existem_aparicoes_nesse_cemiterio!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST013 CONDITION-1   LEVEL 40 115
QUEST013 CONDITION-1   SPEECH Volte_no_nivel_correto!
QUEST013 CONDITION-2   ISTRANS 0
QUEST013 CONDITION-2   SPEECH Apenas_mortais!
QUEST013 CONDITION-3   ITEM 4038 1
QUEST013 CONDITION-3   SPEECH Cade_a_vela_do_coveiro?
QUEST013 CONDITION-4   ISLOG  0

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST013 REWARD-1	0   99 SPEECH   A_quest_foi_iniciada!
QUEST013 REWARD-2	0   99 TELEPORT	2397 2104
QUEST013 REWARD-3	0   99 DELETEITEM 4038 1
