
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST017 NAME			    Guarda
QUEST017 POSITION			1300 4036

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST017 BASE_SPEECH-1      Se_voce_chegou_ate_aqui_quer_dizer_que_voce_e_forte!
QUEST017 BASE_SPEECH-2      Os_elfos_e_os_humanos_cravam_uma_batalha_a_seculos!
QUEST017 BASE_SPEECH-3      Chegue_mais_perto,_quero_te_contar_algo!
QUEST017 BASE_SPEECH-4      Destrua_esses_elfos!_Rapido!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST017 CONDITION-1   LEVEL 321 355
QUEST017 CONDITION-1   SPEECH Nao_sei_onde_voce_quer_ir_com_esse_nivel!
QUEST017 CONDITION-2   ISTRANS 0
QUEST017 CONDITION-2   SPEECH Apenas_mortais!_Suma_daqui!
QUEST017 CONDITION-3   ITEM 4042 1
QUEST017 CONDITION-3   SPEECH Preciso_de_um_emblema_do_guarda!
QUEST017 CONDITION-4   ISLOG  0


// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST017 REWARD-1	0   99 SPEECH   A_quest_foi_iniciada!
QUEST017 REWARD-2	0   99 TELEPORT	1326 4038
QUEST017 REWARD-3	0   99 DELETEITEM 4042 1
