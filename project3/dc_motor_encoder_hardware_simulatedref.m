function sys=dc_motor_encoder_hardware_simulatedref
sys = [];
sys.child = [];
sys.NumDataTypes = 2; 
sys.DataTypes = [];
temp.EnumNames='';
temp.EnumValues = [];
temp.Name = '';
sys.DataTypes = repmat(temp,1,2);
sys.DataTypes(1).Name = 'real_T';
sys.DataTypes(2).Name = 'boolean_T';
