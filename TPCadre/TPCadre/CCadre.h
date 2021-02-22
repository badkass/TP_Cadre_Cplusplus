#pragma once
#include <iostream>

using namespace std;

class CCadre
{
private:
	float m_fX;
	float m_fY;
	float m_fLongueur;
	float m_fLargeur;
	char m_cMotif;

public:
	//constructeur et destructeur
	CCadre(const float X = 20, const float Y = 10, const float largeur = 10, const char motif = '+');
	~CCadre();

	float getLongueur() const;
	float getLargeur() const;
	char getMotif() const;

	//fonctions
	void setLongueur(const float longueur);
	void setLargeur(const float largeur);
	void setMotif(const char motif);
	void Rotation(const float angle);
	void Afficher();
	void ToString();

	//calcul
	bool IsCarre() const;
	float Perimetre() const;
	float Surface() const;
};

