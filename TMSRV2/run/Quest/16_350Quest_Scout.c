
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST016 NAME			    Guarda
QUEST016 POSITION			667 3767

//  base_speech�� �� 10�ʰ������� npc�� ȥ�ڸ�ó�� �Ѵ�. 1~4���� �Է��� �����ϸ�, �������� ���ֳ����� �Ϸ��� 4����� �������� �Է��Ѵ�
QUEST016 BASE_SPEECH-1      Ta_ouvindo?_Essas_hydra_chorando!
QUEST016 BASE_SPEECH-2      Mano!!!_Quero_ir_pra_casa,_essa_vida_de_guarda_e_dificil!
QUEST016 BASE_SPEECH-3      Ow!_Mata_essas_hydras_ae!_Preciso_terminar_meu_horario!
QUEST016 BASE_SPEECH-4      Elas_vao_te_dar_muita_exp!_Pode_crer!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST016 CONDITION-1   LEVEL 266 320
QUEST016 CONDITION-1   SPEECH Voce_precisa_ter_mais_nivel_para_entrar!
QUEST016 CONDITION-2   ISTRANS 0
QUEST016 CONDITION-2   SPEECH O_rei_mandou_dizer:_Apenas_mortais!
QUEST016 CONDITION-3   ITEM 4041 1
QUEST016 CONDITION-3   SPEECH Preciso_de_uma_mana_do_batedor!
QUEST016 CONDITION-4   ISLOG  0

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST016 REWARD-1	0   99 SPEECH   A_quest_foi_iniciada!
QUEST016 REWARD-2	0   99 TELEPORT	671 3754
QUEST016 REWARD-3	0   99 DELETEITEM 4041 1
