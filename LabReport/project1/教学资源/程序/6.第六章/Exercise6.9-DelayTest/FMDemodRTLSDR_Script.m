function Baseband=FMDemodRTLSDR_Script(ISamples,QSamples)
%1�� ���㸴���ķ���
Phase = atan2(ISamples,QSamples);

%2�� ��λ����
Phase_Unwrap = unwrap(Phase);

%3�� ΢��
Baseband = diff(Phase_Unwrap);

end