
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST014 NAME			    Jardineiro
QUEST014 POSITION			2223 1714

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST014 BASE_SPEECH-1      Ei!!_Preciso_de_sua_ajuda!
QUEST014 BASE_SPEECH-2      Cuide_do_Jardim_dos_Deuses_que_esta_sendo_atacado!
QUEST014 BASE_SPEECH-3      Esses_monstros_estao_destruindo_nossa_colheita!
QUEST014 BASE_SPEECH-4      Voce_sera_recompensado!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST014 CONDITION-1   LEVEL 116 190
QUEST014 CONDITION-1   SPEECH Volte_no_nivel_correto!
QUEST014 CONDITION-2   ISTRANS 0
QUEST014 CONDITION-2   SPEECH Apenas_mortais!
QUEST014 CONDITION-3   ITEM 4039 1
QUEST014 CONDITION-3   SPEECH Preciso_de_uma_colheita_do_jardineiro!
QUEST014 CONDITION-4   ISLOG  0

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST014 REWARD-1	0   99 SPEECH   A_quest_foi_iniciada!
QUEST014 REWARD-2	0   99 TELEPORT	2237 1714
QUEST014 REWARD-3	0   99 DELETEITEM 4039 1
