#pragma once

class Bramka
{
	bool * wejscia;
	int ilosc_wejsc;

public:
	Bramka(bool ustalona_ilosc_wejsc) : ilosc_wejsc(ustalona_ilosc_wejsc)
	{
		wejscia = new bool[ilosc_wejsc];
		zeruj();
	}

	~Bramka()
	{
		delete[] wejscia;
	};

	inline	void zeruj()
	{
		for (size_t i = 0; i < ilosc_wejsc; i++)
			wejscia[i] = 0;
	}

	inline int ile_wejsc()
	{
		return ilosc_wejsc;
	}
	


};

