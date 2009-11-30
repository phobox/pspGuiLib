/*
 * scePaf.h 5.00
 *
 *  Created on: 30-nov-2009
 *      Author: Phobox
 *
 *
 * Notes:
 * all things written here are not known for sure and may deeply change.
 *
 */

#ifndef SCEPAF_H_
#define SCEPAF_H_



//temporary
typedef ScePafRcoID		(void*);
typedef ScePafTextureID	(void*);
typedef ScePafTextID	(void*);


//"common" functions in scePaf
#define scePaf_15AFC8D3 snprintf
#define scePaf_6CEA048C malloc
#define scePaf_48BB05D5 malloc //(calls scePaf_6CEA048C)
#define scePaf_7C66F326 malloc //(calls scePaf_6CEA048C)
#define scePaf_11EFC5FD sprintf
#define scePaf_CDDCFFB3 wsnprintf //for wchar



/**
 * load a rco from default folder?
 * returns a pointer to a strructure (unknown)
 */
ScePafRcoID scePaf_A78805B0(char *rcoName);

/**
 * load a texture from a rcoid using a name
 *
 * saves data in arg1 (texID), a pointer to a structure of 0x10 bytes
 */
void scePaf_047C9996(ScePafTextureID *texID, ScePafRcoID rcoID, char *texture_name);


/**
 * load a text from a rco.
 *
 * arg1 may be a pointer to a structure
 * return value can be a pointer to a strcture
 */
ScePafTextID scePaf_970DC20D(ScePafRcoID rcoID, char *textName);


#endif /* SCEPAF_H_ */
