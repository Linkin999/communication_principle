function Baseband=FMDemodRTLSDR_COM(ISamples,QSamples)
%1�� ������
Phase = atan2(ISamples,QSamples);

%2�� ��λ����
Phase_Unwrap = unwrap(Phase);

%3�� ΢��
Baseband = diff(Phase_Unwrap);

end
