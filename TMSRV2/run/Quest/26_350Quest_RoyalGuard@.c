
// Tmsrv\run�� \quest������ ���� �ű⿡ ���Ǿ� ���ϰ� ���� �ִ´�.
// ���� �α״� "que,quest:����Ʈ�ѹ� char:Ŭ������ ĳ�����̸�."�� ������ ������ �ִ�.

QUEST026 NAME			    Guarda_Real@
QUEST026 POSITION			1750 1584

QUEST026 BASE_SPEECH-1      Voce_quer_se_alistar_em_um_reino?
QUEST026 BASE_SPEECH-2      Otimo!_voce_precisa_passar_no_meu_teste!
QUEST026 BASE_SPEECH-3      Traga_o_emblema_do_reino...
QUEST026 BASE_SPEECH-4      E_fale_com_o_nosso_rei!

//  condition�� 1~4���� �Է��� �����ϴ�
//  level �ڿ� (�ּ�) (�ִ�) ������ �´�. 20�� �ǵ��� �Ϸ��� 20 20�� �Է��ϸ� �ȴ�
//  item �ε��� ���� ���ڴ� �ʿ� �����̴�.
//  condition_speech�� condition�� ���յ��� �ȴ°�� �ߴ� �޽����̴�.
QUEST026 CONDITION-1   LEVEL 220 250
QUEST026 CONDITION-1   SPEECH Level_inadequado!
QUEST026 CONDITION-2   ISTRANS 0
QUEST026 CONDITION-2   SPEECH Apenas_mortais!
QUEST026 CONDITION-3   ISLOG  0

// success_speech�� ������ ������ �ָ� �ߴ� �޽����̴�
// reward�� 1~8 ���� �Է��� �����ϸ� Ȯ���� �뿪���� �Է��Ѵ�
// Ȯ���� 0~99 �̸� 0 99�� �Է��ϸ� 100%�� �Ǹ�, 1/4�� �������� �ϳ� �����Ұ��� �Ʒ��� ���� �ؾ� �Ѵ�
// �� �������� ������ �ؿ� ������ �κ�(7��)�� �����ϸ� �ȴ�.
QUEST026 REWARD-1	0   99 SPEECH   O_teste_real_foi_iniciado!
QUEST026 REWARD-2	0   99 TELEPORT	1730 1726
