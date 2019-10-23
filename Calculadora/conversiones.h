string Dec_Bin(int nume);
int Bin_Dec(string bin);
string Hex_Bin(string hexa); 
string Bin_Hex(string bin);
string Oct_Bin(string oct); 
string Bin_Oct(string bin);
string Tex_Bin(string tex); 
string Bin_Tex(string bin);

string Dec_Bin(int nume)
{
	string nu = to_string(nume);
	string binari;
	int potencia = 0;

	for (int i = 0; pow(2, i) <= nume; i++)
	{
		potencia = i + 1;
	}
	for (int i = 0; i <= potencia; i++)
	{
		if (nume >= pow(2, potencia - i)) {
			nume -= pow(2, potencia - i);
			binari += "1";
		}
		else {
			binari += "0";
		}
	}
	if (binari != "0")
	{
		binari.erase(0, 1);
	}
	return binari;
}

int Bin_Dec(string bin) {
	int res = 0;
	vector <char> bina;
	string ror;
	for (int i = 0; bin[i] != 0; ++i)
	{
		if (bin[i] != 32)
		{
			ror += bin[i];
		}
	}
	bin = ror;
	for (int i = 0; i <= bin.length(); i++)
	{
		bina.push_back(bin[i]);
		if (bina[i] == '1') {
			res += pow(2, bin.length() - i - 1);
		}
	}
	return res;
}

string Hex_Bin(string hexa) {
	vector <char> hexnum;
	vector <int> valor; string res;
	vector <string> resultado;

	for (int i = 0; i < hexa.length(); i++)
	{
		hexnum.push_back(hexa[i]);
		switch (toupper(hexnum[i]))
		{
		case 'A': {
			valor.push_back(10);
			break;
		}
		case 'B': {
			valor.push_back(11);
			break;
		}
		case 'C': {
			valor.push_back(12);
			break;
		}
		case 'D': {
			valor.push_back(13);
			break;
		}
		case 'E': {
			valor.push_back(14);
			break;
		}
		case 'F': {
			valor.push_back(15);
			break;
		}
		default: {
			int a = hexnum[i] - '0';
			if (a >= 0 || a <= 9)
			{
				valor.push_back(a);
			}
			else {
				valor.push_back(0);
			}
			break;
		}
		}
		resultado.push_back(Dec_Bin(valor[i]));
		resultado[i].erase(0, 0);
		do
		{
			resultado[i] = "0" + resultado[i];
		}while (resultado[i].length() < 4);
		res += resultado[i];
	}
	return res;
} 

string Bin_Hex(string bin) {
	vector <char> bina;
	string resultado = "#";
	vector <int> deci; int temp_res = 0;
	string ror;
	for (int i = 0; bin[i] != 0; ++i)
	{
		if (bin[i] != 32)
		{
			ror += bin[i];
		}
	}
	bin = ror;
	float leng;
	leng = (float)bin.length() / 4;
	if (leng != (int)leng)
	{
		for (int i = 0; i < abs(((leng - (int)leng) * 4) - 4); i++)
		{
			bina.push_back('0');
		}
	}
	for (int i = 0; i < bin.length(); i++)
	{
		bina.push_back(bin[i]);
	}
	for (int i = 0; i < bina.size() / 4; i++)
	{
		temp_res = 0;
		for (int j = 4; j > 0; j--) {
			if (bina[4 - j + (i * 4)] == '1') {
				temp_res += pow(2, j - 1);
			}
		}
		deci.push_back(temp_res);
		if (deci[i] >= 10)
		{
			switch (deci[i]) {
			case 10:
				resultado += "A";
				break;
			case 11:
				resultado += "B";
				break;
			case 12:
				resultado += "C";
				break;
			case 13:
				resultado += "D";
				break;
			case 14:
				resultado += "E";
				break;
			case 15:
				resultado += "F";
				break;
			}
		}
		else
		{
			resultado += to_string(deci[i]);
		}
	}
	return resultado;
}

string Oct_Bin(string oct) {
	vector <int> deci; string reou;
	vector <string> binario; int a;
	string res;
	for (int i = 0; i < oct.length(); i++)
	{
		reou = oct[i];
		deci.push_back(atoi(reou.c_str()));
		if (deci[i] >= 0 && deci[i] <= 7)
		{
			binario.push_back(Dec_Bin(deci[i]));
			a = binario[i].length();
			for (int j = 0; j < (3 - a); j++)
			{
				binario[i] = "0" + binario[i];
			}
		}
		else {
			binario.push_back("000");
		}
		res += binario[i];
	}
	return res;
}

string Bin_Oct(string oct) {
	vector <string> bina; int temp_res;
	vector <int> valor; string res;
	string ror;
	for (int i = 0; oct[i] != 0; ++i)
	{
		if (oct[i] != 32)
		{
			ror += oct[i];
		}
	}
	oct = ror;
	int a = oct.length();
	if (a % 3 != 0)
	{
		temp_res = a;
		do
		{
			oct = "0" + oct;
			temp_res++;
		} while (temp_res % 3 != 0);
	}
	a = oct.length();
	for (int i = 0; i < a/3; i++)
	{
		bina.push_back(oct.substr(i * 3, 3));
		valor.push_back(Bin_Dec(bina[i]));
		res += to_string(valor[i]);
	}
	return res;
}

string Tex_Bin(string tex) {
	vector <int> letras;
	vector <string> bina;
	string texto;
	for (int i = 0; i < tex.length(); i++)
	{
		letras.push_back(tex[i]);
		bina.push_back(Dec_Bin(letras[i]));
		if (bina[i].length() < 8)
		{
			texto += "0" + bina[i] + " ";
		}
		else
		{
			texto += bina[i] + " ";
		}
	}
	return texto;
}

string Bin_Tex(string bin) {
	vector <string> bina; int temp_res;
	vector <int> valor; string res;
	string ror;
	for (int i = 0; bin[i] != 0; ++i)
	{
		if (bin[i] != 32)
		{
			ror += bin[i];
		}
	}
	bin = ror;
	int a = bin.length();
	if (a % 8 != 0)
	{
		temp_res = a;
		do
		{
			bin = "0" + bin;
			temp_res++;
		} while (temp_res % 8 != 0);
	}
	a = bin.length();
	for (int i = 0; i < a / 8; i++)
	{
		bina.push_back(bin.substr(i * 8, 8));
		valor.push_back(Bin_Dec(bina[i]));
		res += (char)valor[i];
	}

	return res;
}