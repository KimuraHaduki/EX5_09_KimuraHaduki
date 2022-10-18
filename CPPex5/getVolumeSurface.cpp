#pragma once
struct BOX {	//” ‚Ì’è‹`
	double x;	//•
	double y;	//‚‚³
	double z;	//‰œs
	double volume;	//‘ÌÏ
	double surface; //•\–ÊÏ
	double packSize;
};
void getVolumeSurface(BOX* box) 
{
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;

}