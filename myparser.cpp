/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 58 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 12/06/19
* Time: 21:26:40
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2019年11月10日
****************************************************************************/

#include "mylexer.h"
#include "tree.h"
#include "generate.h"
#include <iostream>
#include <unordered_map>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
int LINENO = 0;

int temp = 0;
int labelNum = 0;
int tempMaxNum = 0;
ofstream fout("result.asm");

extern string kindName[];

struct variable {
	string name;
	enum TypeKind type;
	union {int intVal;double doubleVal;
		   float floatVal;char chVal; bool booleanVal;} value;
		   
};
 
unordered_map<string, variable*> idTable;
unordered_map<string, variable*>::iterator it;

void printIdTable() {
	cout << endl << endl << "variable\t" << "type"<< endl;
	for(auto x : idTable) {
		cout << x.second->name << "\t\t" << kindName[x.second->type] << endl;
	}
}

#line 83 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 60 ".\\myparser.y"

	// place any extra initialisation code here

#line 107 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 65 ".\\myparser.y"

	// place any extra cleanup code here

#line 121 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 113 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(CompK);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(5 - 6);
                
                if(yyattribute(5 - 6)->error != Normal) {
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
                }
                
                postOrderTraverse((*(YYSTYPE YYFAR*)yyvalptr));
                printIdTable();
                
                genAsmCode(fout, (*(YYSTYPE YYFAR*)yyvalptr));
                system("pause");
            
#line 244 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 129 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
                Node* temp = yyattribute(1 - 2);
                while(temp->sibling != nullptr) {
                    temp = temp->sibling;
                }
                temp->sibling = yyattribute(2 - 2);
            
#line 264 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 137 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
            
#line 279 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 143 ".\\myparser.y"

            if(isDebug) {
                cout << "assign_stmt" << endl;
            }
            temp--;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = -1;
            (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
        
#line 299 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 151 ".\\myparser.y"

            if(isDebug) {
                cout << "declare_stmt" << endl;
            }
            (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);
        
#line 317 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 157 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 330 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 158 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 343 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 159 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 356 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 160 ".\\myparser.y"

			(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(CompK);
			(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(2 - 3);
			
			if(yyattribute(2 - 3)->error != Normal)
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
		
#line 375 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 167 ".\\myparser.y"

			(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(InputK);
			(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
			
			// 未声明
			if(it == idTable.end()) {
				yyattribute(3 - 5)->error = NotDef;
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
			}
			else
				yyattribute(3 - 5)->type = it->second->type;
		
#line 399 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 179 ".\\myparser.y"

			(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(OutputK);
			(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
			
			// 输出Bool
			if(yyattribute(3 - 5)->type == Bool)
				(*(YYSTYPE YYFAR*)yyvalptr)->error = OutBool;
			if(yyattribute(3 - 5)->type == Void)
				(*(YYSTYPE YYFAR*)yyvalptr)->error = OutVoid;
			if(yyattribute(3 - 5)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
			}
			
			if(yyattribute(3 - 5)->kind.expKind == OpK)
					temp--;
			//temp = temp < 0 ? 0 : temp;
		
#line 428 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 196 ".\\myparser.y"

			(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(EmptyK);
		
#line 443 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 201 ".\\myparser.y"

                
                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(AssignK);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
                (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
                strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "=");
                
				it = idTable.find(string(yyattribute(1 - 3)->attr.name));
				// 未定义
				if(it == idTable.end()) {
					yyattribute(1 - 3)->error = NotDef;
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
				}
				else {
					yyattribute(1 - 3)->type = it->second->type;
					// ID/连续赋值，右部出错
					if(yyattribute(3 - 3)->error != Normal) {
						(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
					}
					// 类型不一致
					else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
						(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
					}
					else {
						(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(1 - 3)->type;
					}
					
					if(isDebug)
						cout << yyattribute(1 - 3)->attr.name << ':' << yyattribute(1 - 3)->type << endl;
				}
				
				temp = temp - 1;
				(*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
				tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
				//temp = temp < 0 ? 0 : temp;
		
#line 492 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 240 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(DeclK);
                    (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 2);
                    (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(2 - 2); 
                    
                    // $$->type = $1->type;
                    
                    Node* idNode = yyattribute(2 - 2);
                    while(idNode) {
						string idName = idNode->attr.name;
						idNode->type = yyattribute(1 - 2)->type;
						// 重定义
						if((it = idTable.find(idName)) != idTable.end()) {
							idNode->error = ReDef;
							idNode = idNode->sibling;
							(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
							continue;
						}
						// 首次定义
						variable* newVar = new variable;
						newVar->name = idName;
						newVar->type = yyattribute(1 - 2)->type;
						idTable.insert({idName, newVar});
						if(isDebug)
							cout << idNode->attr.name << ':' << idNode->type << endl;
						idNode = idNode->sibling;
                    } 
                
#line 532 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 270 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr) = newTypeNode(Void);
                
#line 547 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 273 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr) = newTypeNode(Integer);
                
#line 562 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 276 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr) = newTypeNode(Float);
                
#line 577 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 279 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr) = newTypeNode(Double);
                
#line 592 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 282 ".\\myparser.y"

                    (*(YYSTYPE YYFAR*)yyvalptr) = newTypeNode(Char);
                
#line 607 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 287 ".\\myparser.y"

                yyattribute(1 - 3)->sibling = yyattribute(3 - 3);
                (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 3);
            
#line 623 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 291 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 636 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 294 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(IfK);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 7);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 7);
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
				(*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "trueLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "falseLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "if_endLabel" + to_string(labelNum++);
                
                if(yyattribute(3 - 7)->error != Normal 
				   || yyattribute(5 - 7)->error != Normal
				   || yyattribute(7 - 7)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
				else if(yyattribute(3 - 7)->type != Bool) {
					(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
				}
				
				temp = temp - 1;
				//temp = temp < 0 ? 0 : temp;
				
            
#line 671 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 317 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(IfK);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[2];
				(*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "trueLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "if_endLabel" + to_string(labelNum++);
                
                if(yyattribute(3 - 5)->error != Normal 
				   || yyattribute(5 - 5)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
				else if(yyattribute(3 - 5)->type != Bool) {
					(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
				}
				
				temp = temp - 1;
				//temp = temp < 0 ? 0 : temp;
            
#line 702 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 338 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(WhileK);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
                (*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "while_startLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "true_label" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "while_endLabel" + to_string(labelNum++);
				
                if(yyattribute(3 - 5)->error != Normal 
				   || yyattribute(5 - 5)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
				else if(yyattribute(3 - 5)->type != Bool) {
					(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
				}
				
				temp = temp - 1;
				//temp = temp < 0 ? 0 : temp;
            
#line 734 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[10];
			yyinitdebug((void YYFAR**)yya, 10);
#endif
			{
#line 360 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(ForK);   
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 9);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 9);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 9); 
                (*(YYSTYPE YYFAR*)yyvalptr)->child[3] = yyattribute(9 - 9);
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
                (*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "for_startLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "true_label" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "for_endLabel" + to_string(labelNum++);
                
                if(yyattribute(3 - 9)->error != Normal 
				   || yyattribute(5 - 9)->error != Normal
				   || yyattribute(7 - 9)->error != Normal
				   || yyattribute(9 - 9)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
				else if(yyattribute(5 - 9)->type != Bool) {
					(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
				}
				
				temp = temp - 3;
				//temp = temp < 0 ? 0 : temp;
            
#line 770 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 384 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(ForK);   
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(4 - 8);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(6 - 8);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[3] = yyattribute(8 - 8); 
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
                (*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "for_startLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "true_label" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "for_endLabel" + to_string(labelNum++);
                
                if(yyattribute(4 - 8)->error != Normal 
				   || yyattribute(6 - 8)->error != Normal
				   || yyattribute(8 - 8)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
				else if(yyattribute(4 - 8)->type != Bool) {
					(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
				}
				
				temp = temp - 2;
				//temp = temp < 0 ? 0 : temp;
            
#line 805 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 407 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(ForK);   
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 8);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(6 - 8);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[3] = yyattribute(8 - 8); 
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
                (*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "for_startLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "true_label" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "for_endLabel" + to_string(labelNum++);
                
                if(yyattribute(3 - 8)->error != Normal 
				   || yyattribute(6 - 8)->error != Normal
				   || yyattribute(8 - 8)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
					
				temp = temp - 2;
				//temp = temp < 0 ? 0 : temp;
            
#line 837 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[9];
			yyinitdebug((void YYFAR**)yya, 9);
#endif
			{
#line 427 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(ForK);   
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 8);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 8);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[2] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[3] = yyattribute(8 - 8);
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
                (*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "for_startLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "true_label" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "for_endLabel" + to_string(labelNum++);
                
                if(yyattribute(3 - 8)->error != Normal 
				   || yyattribute(5 - 8)->error != Normal
				   || yyattribute(8 - 8)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
				else if(yyattribute(5 - 8)->type != Bool) {
					(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
				}
				
				temp = temp - 2;
				//temp = temp < 0 ? 0 : temp;
            
#line 872 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 450 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(ForK);   
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(5 - 7);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[3] = yyattribute(7 - 7);
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
                (*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "for_startLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "true_label" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "for_endLabel" + to_string(labelNum++);
                
                if(yyattribute(5 - 7)->error != Normal 
				   || yyattribute(7 - 7)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
					
				temp = temp - 1;
				//temp = temp < 0 ? 0 : temp;
            
#line 903 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 469 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(ForK);   
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(4 - 7);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[2] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[3] = yyattribute(7 - 7);
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
                (*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "for_startLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "true_label" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "for_endLabel" + to_string(labelNum++);
                
                if(yyattribute(4 - 7)->error != Normal 
				   || yyattribute(7 - 7)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
				else if(yyattribute(4 - 7)->type != Bool) {
					(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
				}
				
				temp = temp - 1;
				//temp = temp < 0 ? 0 : temp;
            
#line 937 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 491 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(ForK);   
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[2] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[3] = yyattribute(7 - 7);
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
                (*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "for_startLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "true_label" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "for_endLabel" + to_string(labelNum++);
                
                if(yyattribute(3 - 7)->error != Normal 
				   || yyattribute(7 - 7)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
		
				temp = temp - 1;
				//temp = temp < 0 ? 0 : temp;
            
#line 968 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[7];
			yyinitdebug((void YYFAR**)yya, 7);
#endif
			{
#line 510 ".\\myparser.y"

                (*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(ForK);   
                (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[2] = nullptr;
                (*(YYSTYPE YYFAR*)yyvalptr)->child[3] = yyattribute(6 - 6);
                
                (*(YYSTYPE YYFAR*)yyvalptr)->label = new string[3];
                (*(YYSTYPE YYFAR*)yyvalptr)->label[0] = "for_startLabel" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[1] = "true_label" + to_string(labelNum++);
				(*(YYSTYPE YYFAR*)yyvalptr)->label[2] = "for_endLabel" + to_string(labelNum++);
                
                if(yyattribute(6 - 6)->error != Normal)
					(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
					
            
#line 996 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 528 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, ">");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
			
            if(isDebug) 
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo <<": >" << endl;
        
#line 1032 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 552 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, ">=");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
			tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
			
            if(isDebug) 
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": >=" << endl;
        
#line 1068 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 576 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "<");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug) 
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": <" << endl;
        
#line 1103 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 599 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "<=");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug) 
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": <=" << endl;
        
#line 1138 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 622 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "==");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug)
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": ==" << endl;
        
#line 1172 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 644 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "!=");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug)
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": !=" << endl;
		
#line 1207 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 667 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "&&");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(!(yyattribute(1 - 3)->type == Bool && yyattribute(3 - 3)->type == Bool)) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug)
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": &&" << endl;
		
#line 1241 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 689 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "||");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(!(yyattribute(1 - 3)->type == Bool && yyattribute(3 - 3)->type == Bool)) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug)
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": ||" << endl;
		
#line 1275 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 711 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "&");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(!(yyattribute(1 - 3)->type == Bool && yyattribute(3 - 3)->type == Bool)) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug)
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": &" << endl;
		
#line 1309 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 733 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "|");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(!(yyattribute(1 - 3)->type == Bool && yyattribute(3 - 3)->type == Bool)) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug)
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": |" << endl;
		
#line 1343 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 755 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "!");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(2 - 2);
            
            (*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
            if(yyattribute(2 - 2)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(!(yyattribute(2 - 2)->type == Bool)) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = LogNotBool;
			}
			
			temp = temp - 1 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            
            if(isDebug)
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": !" << endl;
		
#line 1377 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 779 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "+");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			else {
				(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(1 - 3)->type;
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug) 
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": +" << endl;
        
#line 1413 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 803 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "-");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			else {
				(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(1 - 3)->type;
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug) 
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": -" << endl;
        
#line 1449 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 827 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "*");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			else {
				(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(1 - 3)->type;
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug) 
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": *" << endl;
        
#line 1485 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 851 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
            (*(YYSTYPE YYFAR*)yyvalptr)->attr.op = new char[10];
            strcpy((*(YYSTYPE YYFAR*)yyvalptr)->attr.op, "/");
            (*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
            (*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
            
            if(yyattribute(1 - 3)->error != Normal || yyattribute(3 - 3)->error != Normal) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = ChildError;
            }
            else if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type) {
				(*(YYSTYPE YYFAR*)yyvalptr)->error = getDiffError(yyattribute(1 - 3)->type, yyattribute(3 - 3)->type);
			}
			else {
				(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(1 - 3)->type;
			}
			
			temp = temp - 2 ;
			//temp = temp < 0 ? 0 : temp;
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
            if(isDebug) 
                cout << (*(YYSTYPE YYFAR*)yyvalptr)->lineNo << ": /" << endl;
        
#line 1521 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 901 ".\\myparser.y"

			(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
        
#line 1536 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 904 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
            (*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
            tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
        
#line 1553 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 909 ".\\myparser.y"

			(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
			(*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
			tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
		
#line 1570 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 914 ".\\myparser.y"

            (*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
            if((it = idTable.find(yyattribute(1 - 1)->attr.name)) == idTable.end())
				(*(YYSTYPE YYFAR*)yyvalptr)->error = NotDef;
			else
				(*(YYSTYPE YYFAR*)yyvalptr)->type = it->second->type;
			(*(YYSTYPE YYFAR*)yyvalptr)->tempNum = temp++;
			tempMaxNum = tempMaxNum < temp ? temp : tempMaxNum;
        
#line 1591 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 923 ".\\myparser.y"

			(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
		
#line 1606 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 926 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1619 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 929 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1632 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 930 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1645 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 931 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1658 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 932 ".\\myparser.y"
(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
#line 1671 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "error", 256 },
		{ "MAIN", 257 },
		{ "INT", 261 },
		{ "DOUBLE", 262 },
		{ "FLOAT", 263 },
		{ "CHAR", 264 },
		{ "VOID", 265 },
		{ "WHILE", 266 },
		{ "FOR", 268 },
		{ "LBRACE", 269 },
		{ "RBRACE", 270 },
		{ "IF", 271 },
		{ "ELSE", 272 },
		{ "ASSIGN", 273 },
		{ "AND_BIT", 274 },
		{ "AND", 275 },
		{ "OR_BIT", 276 },
		{ "OR", 277 },
		{ "BNE", 278 },
		{ "LNE", 279 },
		{ "BE", 280 },
		{ "LE", 281 },
		{ "EQUAL", 282 },
		{ "NOT_EQ", 283 },
		{ "NOT", 284 },
		{ "LINEEND", 285 },
		{ "LPAREN", 286 },
		{ "RPAREN", 287 },
		{ "COMMA", 288 },
		{ "ADD", 289 },
		{ "SUB", 290 },
		{ "MUL", 291 },
		{ "DIV", 292 },
		{ "ID", 294 },
		{ "INT_NUMBER", 295 },
		{ "FLOAT_NUMBER", 296 },
		{ "OCT_NUMBER", 297 },
		{ "HEX_NUMBER", 298 },
		{ "CHARACTER", 299 },
		{ "INPUT", 300 },
		{ "OUTPUT", 301 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: program",
		"program: MAIN LPAREN RPAREN LBRACE stmts RBRACE",
		"stmts: stmts stmt",
		"stmts: stmt",
		"stmt: assign_stmt LINEEND",
		"stmt: declare_stmt LINEEND",
		"stmt: if_stmt",
		"stmt: while_stmt",
		"stmt: for_stmt",
		"stmt: LBRACE stmts RBRACE",
		"stmt: INPUT LPAREN ID RPAREN LINEEND",
		"stmt: OUTPUT LPAREN expr RPAREN LINEEND",
		"stmt: LINEEND",
		"assign_stmt: ID ASSIGN expr",
		"declare_stmt: var_type idList",
		"var_type: VOID",
		"var_type: INT",
		"var_type: FLOAT",
		"var_type: DOUBLE",
		"var_type: CHAR",
		"idList: ID COMMA idList",
		"idList: ID",
		"if_stmt: IF LPAREN expr RPAREN stmt ELSE stmt",
		"if_stmt: IF LPAREN expr RPAREN stmt",
		"while_stmt: WHILE LPAREN expr RPAREN stmt",
		"for_stmt: FOR LPAREN expr LINEEND expr LINEEND expr RPAREN stmt",
		"for_stmt: FOR LPAREN LINEEND expr LINEEND expr RPAREN stmt",
		"for_stmt: FOR LPAREN expr LINEEND LINEEND expr RPAREN stmt",
		"for_stmt: FOR LPAREN expr LINEEND expr LINEEND RPAREN stmt",
		"for_stmt: FOR LPAREN LINEEND LINEEND expr RPAREN stmt",
		"for_stmt: FOR LPAREN LINEEND expr LINEEND RPAREN stmt",
		"for_stmt: FOR LPAREN expr LINEEND LINEEND RPAREN stmt",
		"for_stmt: FOR LPAREN LINEEND LINEEND RPAREN stmt",
		"logical_expr:",
		"logical_expr: expr BNE expr",
		"logical_expr: expr BE expr",
		"logical_expr: expr LNE expr",
		"logical_expr: expr LE expr",
		"logical_expr: expr EQUAL expr",
		"logical_expr: expr NOT_EQ expr",
		"logical_expr: expr AND expr",
		"logical_expr: expr OR expr",
		"logical_expr: expr AND_BIT expr",
		"logical_expr: expr OR_BIT expr",
		"logical_expr: NOT expr",
		"expr: expr ADD expr",
		"expr: expr SUB expr",
		"expr: expr MUL expr",
		"expr: expr DIV expr",
		"expr: LPAREN expr RPAREN",
		"expr: NUMBER",
		"expr: CHARACTER",
		"expr: ID",
		"expr: assign_stmt",
		"expr: logical_expr",
		"NUMBER: INT_NUMBER",
		"NUMBER: FLOAT_NUMBER",
		"NUMBER: HEX_NUMBER",
		"NUMBER: OCT_NUMBER",
		"Grammar:"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 6, 0 },
		{ 2, 2, 1 },
		{ 2, 1, 2 },
		{ 3, 2, 3 },
		{ 3, 2, 4 },
		{ 3, 1, 5 },
		{ 3, 1, 6 },
		{ 3, 1, 7 },
		{ 3, 3, 8 },
		{ 3, 5, 9 },
		{ 3, 5, 10 },
		{ 3, 1, 11 },
		{ 4, 3, 12 },
		{ 5, 2, 13 },
		{ 6, 1, 14 },
		{ 6, 1, 15 },
		{ 6, 1, 16 },
		{ 6, 1, 17 },
		{ 6, 1, 18 },
		{ 7, 3, 19 },
		{ 7, 1, 20 },
		{ 8, 7, 21 },
		{ 8, 5, 22 },
		{ 9, 5, 23 },
		{ 10, 9, 24 },
		{ 10, 8, 25 },
		{ 10, 8, 26 },
		{ 10, 8, 27 },
		{ 10, 7, 28 },
		{ 10, 7, 29 },
		{ 10, 7, 30 },
		{ 10, 6, 31 },
		{ 11, 0, -1 },
		{ 11, 3, 32 },
		{ 11, 3, 33 },
		{ 11, 3, 34 },
		{ 11, 3, 35 },
		{ 11, 3, 36 },
		{ 11, 3, 37 },
		{ 11, 3, 38 },
		{ 11, 3, 39 },
		{ 11, 3, 40 },
		{ 11, 3, 41 },
		{ 11, 2, 42 },
		{ 12, 3, 43 },
		{ 12, 3, 44 },
		{ 12, 3, 45 },
		{ 12, 3, 46 },
		{ 12, 3, 47 },
		{ 12, 1, 48 },
		{ 12, 1, 49 },
		{ 12, 1, 50 },
		{ 12, 1, 51 },
		{ 12, 1, 52 },
		{ 13, 1, 53 },
		{ 13, 1, 54 },
		{ 13, 1, 55 },
		{ 13, 1, 56 },
		{ 14, 0, -1 }
	};
	yyreduction = reduction;

	yytokenaction_size = 433;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 122, YYAT_SHIFT, 62 },
		{ 122, YYAT_SHIFT, 63 },
		{ 122, YYAT_SHIFT, 64 },
		{ 122, YYAT_SHIFT, 65 },
		{ 122, YYAT_SHIFT, 66 },
		{ 122, YYAT_SHIFT, 67 },
		{ 122, YYAT_SHIFT, 68 },
		{ 122, YYAT_SHIFT, 69 },
		{ 122, YYAT_SHIFT, 70 },
		{ 122, YYAT_SHIFT, 71 },
		{ 104, YYAT_SHIFT, 114 },
		{ 113, YYAT_SHIFT, 120 },
		{ 104, YYAT_ERROR, 0 },
		{ 122, YYAT_SHIFT, 127 },
		{ 111, YYAT_SHIFT, 118 },
		{ 122, YYAT_SHIFT, 73 },
		{ 122, YYAT_SHIFT, 74 },
		{ 122, YYAT_SHIFT, 75 },
		{ 122, YYAT_SHIFT, 76 },
		{ 127, YYAT_SHIFT, 6 },
		{ 127, YYAT_SHIFT, 7 },
		{ 127, YYAT_SHIFT, 8 },
		{ 127, YYAT_SHIFT, 9 },
		{ 127, YYAT_SHIFT, 10 },
		{ 127, YYAT_SHIFT, 11 },
		{ 105, YYAT_SHIFT, 115 },
		{ 127, YYAT_SHIFT, 12 },
		{ 127, YYAT_SHIFT, 13 },
		{ 101, YYAT_SHIFT, 109 },
		{ 127, YYAT_SHIFT, 14 },
		{ 56, YYAT_SHIFT, 62 },
		{ 56, YYAT_SHIFT, 63 },
		{ 56, YYAT_SHIFT, 64 },
		{ 56, YYAT_SHIFT, 65 },
		{ 56, YYAT_SHIFT, 66 },
		{ 56, YYAT_SHIFT, 67 },
		{ 56, YYAT_SHIFT, 68 },
		{ 56, YYAT_SHIFT, 69 },
		{ 56, YYAT_SHIFT, 70 },
		{ 56, YYAT_SHIFT, 71 },
		{ 97, YYAT_SHIFT, 75 },
		{ 97, YYAT_SHIFT, 76 },
		{ 82, YYAT_SHIFT, 107 },
		{ 127, YYAT_SHIFT, 15 },
		{ 81, YYAT_SHIFT, 106 },
		{ 56, YYAT_SHIFT, 73 },
		{ 56, YYAT_SHIFT, 74 },
		{ 56, YYAT_SHIFT, 75 },
		{ 56, YYAT_SHIFT, 76 },
		{ 96, YYAT_SHIFT, 75 },
		{ 96, YYAT_SHIFT, 76 },
		{ 78, YYAT_SHIFT, 102 },
		{ 127, YYAT_SHIFT, 16 },
		{ 61, YYAT_SHIFT, 84 },
		{ 59, YYAT_SHIFT, 36 },
		{ 58, YYAT_SHIFT, 82 },
		{ 88, YYAT_SHIFT, 62 },
		{ 88, YYAT_SHIFT, 63 },
		{ 127, YYAT_SHIFT, 17 },
		{ 127, YYAT_SHIFT, 18 },
		{ 88, YYAT_SHIFT, 66 },
		{ 88, YYAT_SHIFT, 67 },
		{ 88, YYAT_SHIFT, 68 },
		{ 88, YYAT_SHIFT, 69 },
		{ 88, YYAT_SHIFT, 70 },
		{ 88, YYAT_SHIFT, 71 },
		{ 94, YYAT_SHIFT, 73 },
		{ 94, YYAT_SHIFT, 74 },
		{ 94, YYAT_SHIFT, 75 },
		{ 94, YYAT_SHIFT, 76 },
		{ 57, YYAT_SHIFT, 81 },
		{ 88, YYAT_SHIFT, 73 },
		{ 88, YYAT_SHIFT, 74 },
		{ 88, YYAT_SHIFT, 75 },
		{ 88, YYAT_SHIFT, 76 },
		{ 87, YYAT_SHIFT, 62 },
		{ 87, YYAT_SHIFT, 63 },
		{ 55, YYAT_SHIFT, 80 },
		{ 53, YYAT_SHIFT, 79 },
		{ 87, YYAT_SHIFT, 66 },
		{ 87, YYAT_SHIFT, 67 },
		{ 87, YYAT_SHIFT, 68 },
		{ 87, YYAT_SHIFT, 69 },
		{ 87, YYAT_SHIFT, 70 },
		{ 87, YYAT_SHIFT, 71 },
		{ 93, YYAT_SHIFT, 73 },
		{ 93, YYAT_SHIFT, 74 },
		{ 93, YYAT_SHIFT, 75 },
		{ 93, YYAT_SHIFT, 76 },
		{ 48, YYAT_SHIFT, 72 },
		{ 87, YYAT_SHIFT, 73 },
		{ 87, YYAT_SHIFT, 74 },
		{ 87, YYAT_SHIFT, 75 },
		{ 87, YYAT_SHIFT, 76 },
		{ 86, YYAT_SHIFT, 66 },
		{ 86, YYAT_SHIFT, 67 },
		{ 86, YYAT_SHIFT, 68 },
		{ 86, YYAT_SHIFT, 69 },
		{ 86, YYAT_SHIFT, 70 },
		{ 86, YYAT_SHIFT, 71 },
		{ 92, YYAT_SHIFT, 73 },
		{ 92, YYAT_SHIFT, 74 },
		{ 92, YYAT_SHIFT, 75 },
		{ 92, YYAT_SHIFT, 76 },
		{ 42, YYAT_SHIFT, 31 },
		{ 86, YYAT_SHIFT, 73 },
		{ 86, YYAT_SHIFT, 74 },
		{ 86, YYAT_SHIFT, 75 },
		{ 86, YYAT_SHIFT, 76 },
		{ 85, YYAT_SHIFT, 66 },
		{ 85, YYAT_SHIFT, 67 },
		{ 85, YYAT_SHIFT, 68 },
		{ 85, YYAT_SHIFT, 69 },
		{ 85, YYAT_SHIFT, 70 },
		{ 85, YYAT_SHIFT, 71 },
		{ 114, YYAT_SHIFT, 40 },
		{ 36, YYAT_SHIFT, 59 },
		{ 114, YYAT_SHIFT, 41 },
		{ 114, YYAT_SHIFT, 121 },
		{ 32, YYAT_SHIFT, 57 },
		{ 85, YYAT_SHIFT, 73 },
		{ 85, YYAT_SHIFT, 74 },
		{ 85, YYAT_SHIFT, 75 },
		{ 85, YYAT_SHIFT, 76 },
		{ 29, YYAT_SHIFT, 54 },
		{ 114, YYAT_SHIFT, 42 },
		{ 114, YYAT_SHIFT, 43 },
		{ 114, YYAT_SHIFT, 44 },
		{ 114, YYAT_SHIFT, 45 },
		{ 114, YYAT_SHIFT, 46 },
		{ 114, YYAT_SHIFT, 47 },
		{ 103, YYAT_SHIFT, 40 },
		{ 23, YYAT_SHIFT, 39 },
		{ 103, YYAT_SHIFT, 41 },
		{ 103, YYAT_SHIFT, 112 },
		{ 22, YYAT_SHIFT, 38 },
		{ 20, YYAT_SHIFT, 34 },
		{ 102, YYAT_SHIFT, 40 },
		{ 18, YYAT_SHIFT, 33 },
		{ 102, YYAT_SHIFT, 41 },
		{ 102, YYAT_SHIFT, 110 },
		{ 103, YYAT_SHIFT, 42 },
		{ 103, YYAT_SHIFT, 43 },
		{ 103, YYAT_SHIFT, 44 },
		{ 103, YYAT_SHIFT, 45 },
		{ 103, YYAT_SHIFT, 46 },
		{ 103, YYAT_SHIFT, 47 },
		{ 102, YYAT_SHIFT, 42 },
		{ 102, YYAT_SHIFT, 43 },
		{ 102, YYAT_SHIFT, 44 },
		{ 102, YYAT_SHIFT, 45 },
		{ 102, YYAT_SHIFT, 46 },
		{ 102, YYAT_SHIFT, 47 },
		{ 79, YYAT_SHIFT, 40 },
		{ 79, YYAT_SHIFT, 103 },
		{ 79, YYAT_SHIFT, 41 },
		{ 17, YYAT_SHIFT, 32 },
		{ 16, YYAT_SHIFT, 31 },
		{ 14, YYAT_SHIFT, 30 },
		{ 77, YYAT_SHIFT, 40 },
		{ 12, YYAT_SHIFT, 28 },
		{ 77, YYAT_SHIFT, 41 },
		{ 77, YYAT_SHIFT, 100 },
		{ 79, YYAT_SHIFT, 42 },
		{ 79, YYAT_SHIFT, 43 },
		{ 79, YYAT_SHIFT, 44 },
		{ 79, YYAT_SHIFT, 45 },
		{ 79, YYAT_SHIFT, 46 },
		{ 79, YYAT_SHIFT, 47 },
		{ 77, YYAT_SHIFT, 42 },
		{ 77, YYAT_SHIFT, 43 },
		{ 77, YYAT_SHIFT, 44 },
		{ 77, YYAT_SHIFT, 45 },
		{ 77, YYAT_SHIFT, 46 },
		{ 77, YYAT_SHIFT, 47 },
		{ 52, YYAT_SHIFT, 40 },
		{ 52, YYAT_SHIFT, 77 },
		{ 52, YYAT_SHIFT, 41 },
		{ 11, YYAT_SHIFT, 27 },
		{ 4, YYAT_SHIFT, 5 },
		{ 3, YYAT_SHIFT, 4 },
		{ 28, YYAT_SHIFT, 40 },
		{ 28, YYAT_SHIFT, 52 },
		{ 28, YYAT_SHIFT, 41 },
		{ 2, YYAT_ACCEPT, 0 },
		{ 52, YYAT_SHIFT, 42 },
		{ 52, YYAT_SHIFT, 43 },
		{ 52, YYAT_SHIFT, 44 },
		{ 52, YYAT_SHIFT, 45 },
		{ 52, YYAT_SHIFT, 46 },
		{ 52, YYAT_SHIFT, 47 },
		{ 28, YYAT_SHIFT, 42 },
		{ 28, YYAT_SHIFT, 43 },
		{ 28, YYAT_SHIFT, 44 },
		{ 28, YYAT_SHIFT, 45 },
		{ 28, YYAT_SHIFT, 46 },
		{ 28, YYAT_SHIFT, 47 },
		{ 76, YYAT_SHIFT, 40 },
		{ 1, YYAT_SHIFT, 3 },
		{ 76, YYAT_SHIFT, 41 },
		{ 0, YYAT_SHIFT, 1 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 75, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 75, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 76, YYAT_SHIFT, 42 },
		{ 76, YYAT_SHIFT, 43 },
		{ 76, YYAT_SHIFT, 44 },
		{ 76, YYAT_SHIFT, 45 },
		{ 76, YYAT_SHIFT, 46 },
		{ 76, YYAT_SHIFT, 47 },
		{ 75, YYAT_SHIFT, 42 },
		{ 75, YYAT_SHIFT, 43 },
		{ 75, YYAT_SHIFT, 44 },
		{ 75, YYAT_SHIFT, 45 },
		{ 75, YYAT_SHIFT, 46 },
		{ 75, YYAT_SHIFT, 47 },
		{ 74, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 74, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 73, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 73, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 74, YYAT_SHIFT, 42 },
		{ 74, YYAT_SHIFT, 43 },
		{ 74, YYAT_SHIFT, 44 },
		{ 74, YYAT_SHIFT, 45 },
		{ 74, YYAT_SHIFT, 46 },
		{ 74, YYAT_SHIFT, 47 },
		{ 73, YYAT_SHIFT, 42 },
		{ 73, YYAT_SHIFT, 43 },
		{ 73, YYAT_SHIFT, 44 },
		{ 73, YYAT_SHIFT, 45 },
		{ 73, YYAT_SHIFT, 46 },
		{ 73, YYAT_SHIFT, 47 },
		{ 71, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 71, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 70, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 70, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 71, YYAT_SHIFT, 42 },
		{ 71, YYAT_SHIFT, 43 },
		{ 71, YYAT_SHIFT, 44 },
		{ 71, YYAT_SHIFT, 45 },
		{ 71, YYAT_SHIFT, 46 },
		{ 71, YYAT_SHIFT, 47 },
		{ 70, YYAT_SHIFT, 42 },
		{ 70, YYAT_SHIFT, 43 },
		{ 70, YYAT_SHIFT, 44 },
		{ 70, YYAT_SHIFT, 45 },
		{ 70, YYAT_SHIFT, 46 },
		{ 70, YYAT_SHIFT, 47 },
		{ 69, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 69, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 68, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 69, YYAT_SHIFT, 42 },
		{ 69, YYAT_SHIFT, 43 },
		{ 69, YYAT_SHIFT, 44 },
		{ 69, YYAT_SHIFT, 45 },
		{ 69, YYAT_SHIFT, 46 },
		{ 69, YYAT_SHIFT, 47 },
		{ 68, YYAT_SHIFT, 42 },
		{ 68, YYAT_SHIFT, 43 },
		{ 68, YYAT_SHIFT, 44 },
		{ 68, YYAT_SHIFT, 45 },
		{ 68, YYAT_SHIFT, 46 },
		{ 68, YYAT_SHIFT, 47 },
		{ 67, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 66, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 67, YYAT_SHIFT, 42 },
		{ 67, YYAT_SHIFT, 43 },
		{ 67, YYAT_SHIFT, 44 },
		{ 67, YYAT_SHIFT, 45 },
		{ 67, YYAT_SHIFT, 46 },
		{ 67, YYAT_SHIFT, 47 },
		{ 66, YYAT_SHIFT, 42 },
		{ 66, YYAT_SHIFT, 43 },
		{ 66, YYAT_SHIFT, 44 },
		{ 66, YYAT_SHIFT, 45 },
		{ 66, YYAT_SHIFT, 46 },
		{ 66, YYAT_SHIFT, 47 },
		{ 65, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 64, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 64, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 65, YYAT_SHIFT, 42 },
		{ 65, YYAT_SHIFT, 43 },
		{ 65, YYAT_SHIFT, 44 },
		{ 65, YYAT_SHIFT, 45 },
		{ 65, YYAT_SHIFT, 46 },
		{ 65, YYAT_SHIFT, 47 },
		{ 64, YYAT_SHIFT, 42 },
		{ 64, YYAT_SHIFT, 43 },
		{ 64, YYAT_SHIFT, 44 },
		{ 64, YYAT_SHIFT, 45 },
		{ 64, YYAT_SHIFT, 46 },
		{ 64, YYAT_SHIFT, 47 },
		{ 63, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 63, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 62, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 62, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 63, YYAT_SHIFT, 42 },
		{ 63, YYAT_SHIFT, 43 },
		{ 63, YYAT_SHIFT, 44 },
		{ 63, YYAT_SHIFT, 45 },
		{ 63, YYAT_SHIFT, 46 },
		{ 63, YYAT_SHIFT, 47 },
		{ 62, YYAT_SHIFT, 42 },
		{ 62, YYAT_SHIFT, 43 },
		{ 62, YYAT_SHIFT, 44 },
		{ 62, YYAT_SHIFT, 45 },
		{ 62, YYAT_SHIFT, 46 },
		{ 62, YYAT_SHIFT, 47 },
		{ 41, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 41, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 40, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 40, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 41, YYAT_SHIFT, 42 },
		{ 41, YYAT_SHIFT, 43 },
		{ 41, YYAT_SHIFT, 44 },
		{ 41, YYAT_SHIFT, 45 },
		{ 41, YYAT_SHIFT, 46 },
		{ 41, YYAT_SHIFT, 47 },
		{ 40, YYAT_SHIFT, 42 },
		{ 40, YYAT_SHIFT, 43 },
		{ 40, YYAT_SHIFT, 44 },
		{ 40, YYAT_SHIFT, 45 },
		{ 40, YYAT_SHIFT, 46 },
		{ 40, YYAT_SHIFT, 47 },
		{ 33, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 33, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 31, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 31, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 33, YYAT_SHIFT, 42 },
		{ 33, YYAT_SHIFT, 43 },
		{ 33, YYAT_SHIFT, 44 },
		{ 33, YYAT_SHIFT, 45 },
		{ 33, YYAT_SHIFT, 46 },
		{ 33, YYAT_SHIFT, 47 },
		{ 31, YYAT_SHIFT, 42 },
		{ 31, YYAT_SHIFT, 43 },
		{ 31, YYAT_SHIFT, 44 },
		{ 31, YYAT_SHIFT, 45 },
		{ 31, YYAT_SHIFT, 46 },
		{ 31, YYAT_SHIFT, 47 },
		{ 30, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 30, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ -1, YYAT_ERROR, 0 },
		{ 27, YYAT_SHIFT, 40 },
		{ -1, YYAT_ERROR, 0 },
		{ 27, YYAT_SHIFT, 41 },
		{ -1, YYAT_ERROR, 0 },
		{ 30, YYAT_SHIFT, 42 },
		{ 30, YYAT_SHIFT, 43 },
		{ 30, YYAT_SHIFT, 44 },
		{ 30, YYAT_SHIFT, 45 },
		{ 30, YYAT_SHIFT, 46 },
		{ 30, YYAT_SHIFT, 47 },
		{ 27, YYAT_SHIFT, 42 },
		{ 27, YYAT_SHIFT, 43 },
		{ 27, YYAT_SHIFT, 44 },
		{ 27, YYAT_SHIFT, 45 },
		{ 27, YYAT_SHIFT, 46 },
		{ 27, YYAT_SHIFT, 47 },
		{ 91, YYAT_SHIFT, 73 },
		{ 91, YYAT_SHIFT, 74 },
		{ 91, YYAT_SHIFT, 75 },
		{ 91, YYAT_SHIFT, 76 },
		{ 90, YYAT_SHIFT, 73 },
		{ 90, YYAT_SHIFT, 74 },
		{ 90, YYAT_SHIFT, 75 },
		{ 90, YYAT_SHIFT, 76 },
		{ 89, YYAT_SHIFT, 73 },
		{ 89, YYAT_SHIFT, 74 },
		{ 89, YYAT_SHIFT, 75 },
		{ 89, YYAT_SHIFT, 76 },
		{ 60, YYAT_SHIFT, 73 },
		{ 60, YYAT_SHIFT, 74 },
		{ 60, YYAT_SHIFT, 75 },
		{ 60, YYAT_SHIFT, 76 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -57, 1, YYAT_ERROR, 0 },
		{ -88, 1, YYAT_ERROR, 0 },
		{ 184, 1, YYAT_ERROR, 0 },
		{ -107, 1, YYAT_ERROR, 0 },
		{ -90, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ -108, 1, YYAT_ERROR, 0 },
		{ -126, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ -128, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 12 },
		{ -116, 1, YYAT_ERROR, 0 },
		{ -130, 1, YYAT_ERROR, 0 },
		{ -148, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 8 },
		{ -134, 1, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_DEFAULT, 59 },
		{ -150, 1, YYAT_ERROR, 0 },
		{ -153, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 117, 1, YYAT_REDUCE, 33 },
		{ -103, 1, YYAT_REDUCE, 33 },
		{ -146, 1, YYAT_DEFAULT, 127 },
		{ 111, 1, YYAT_REDUCE, 33 },
		{ 95, 1, YYAT_REDUCE, 33 },
		{ -175, 1, YYAT_ERROR, 0 },
		{ 89, 1, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -172, 1, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_REDUCE, 14 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 73, 1, YYAT_REDUCE, 33 },
		{ 67, 1, YYAT_REDUCE, 33 },
		{ -169, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 55 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ -198, 1, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ -109, 1, YYAT_REDUCE, 33 },
		{ -207, 1, YYAT_DEFAULT, 104 },
		{ 0, 0, YYAT_REDUCE, 9 },
		{ -210, 1, YYAT_DEFAULT, 122 },
		{ -244, 1, YYAT_REDUCE, 13 },
		{ -217, 1, YYAT_ERROR, 0 },
		{ -232, 1, YYAT_DEFAULT, 122 },
		{ -240, 1, YYAT_ERROR, 0 },
		{ 140, 1, YYAT_REDUCE, 44 },
		{ -234, 1, YYAT_DEFAULT, 122 },
		{ 51, 1, YYAT_REDUCE, 33 },
		{ 45, 1, YYAT_REDUCE, 33 },
		{ 29, 1, YYAT_REDUCE, 33 },
		{ 23, 1, YYAT_REDUCE, 33 },
		{ 7, 1, YYAT_REDUCE, 33 },
		{ 1, 1, YYAT_REDUCE, 33 },
		{ -15, 1, YYAT_REDUCE, 33 },
		{ -21, 1, YYAT_REDUCE, 33 },
		{ -37, 1, YYAT_REDUCE, 33 },
		{ -43, 1, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ -59, 1, YYAT_REDUCE, 33 },
		{ -65, 1, YYAT_REDUCE, 33 },
		{ -81, 1, YYAT_REDUCE, 33 },
		{ -87, 1, YYAT_REDUCE, 33 },
		{ -125, 1, YYAT_REDUCE, 33 },
		{ -234, 1, YYAT_DEFAULT, 104 },
		{ -131, 1, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ -241, 1, YYAT_ERROR, 0 },
		{ -243, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ 0, 0, YYAT_REDUCE, 49 },
		{ -169, 1, YYAT_REDUCE, 42 },
		{ -184, 1, YYAT_REDUCE, 40 },
		{ -199, 1, YYAT_REDUCE, 43 },
		{ -218, 1, YYAT_REDUCE, 41 },
		{ 136, 1, YYAT_REDUCE, 34 },
		{ 132, 1, YYAT_REDUCE, 36 },
		{ 128, 1, YYAT_REDUCE, 35 },
		{ -189, 1, YYAT_REDUCE, 37 },
		{ -204, 1, YYAT_REDUCE, 38 },
		{ -223, 1, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ -242, 1, YYAT_REDUCE, 45 },
		{ -251, 1, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ -259, 1, YYAT_DEFAULT, 122 },
		{ -147, 1, YYAT_REDUCE, 33 },
		{ -153, 1, YYAT_REDUCE, 33 },
		{ -275, 1, YYAT_DEFAULT, 122 },
		{ -247, 1, YYAT_REDUCE, 23 },
		{ 0, 0, YYAT_REDUCE, 10 },
		{ 0, 0, YYAT_REDUCE, 11 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ -273, 1, YYAT_DEFAULT, 122 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ -276, 1, YYAT_DEFAULT, 122 },
		{ -169, 1, YYAT_REDUCE, 33 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ 0, 0, YYAT_DEFAULT, 127 },
		{ -274, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ -242, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 25 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 54;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 127, 128 },
		{ 127, 22 },
		{ 127, 23 },
		{ 127, 21 },
		{ 114, 49 },
		{ 127, 24 },
		{ 127, 26 },
		{ 127, 19 },
		{ 13, 29 },
		{ 13, 25 },
		{ 121, 126 },
		{ 114, 50 },
		{ 114, 122 },
		{ 114, 51 },
		{ 120, 125 },
		{ 118, 124 },
		{ 115, 123 },
		{ 112, 119 },
		{ 110, 117 },
		{ 109, 116 },
		{ 103, 113 },
		{ 102, 111 },
		{ 100, 108 },
		{ 80, 105 },
		{ 79, 104 },
		{ 77, 101 },
		{ 76, 99 },
		{ 75, 98 },
		{ 74, 97 },
		{ 73, 96 },
		{ 72, 95 },
		{ 71, 94 },
		{ 70, 93 },
		{ 69, 92 },
		{ 68, 91 },
		{ 67, 90 },
		{ 66, 89 },
		{ 65, 88 },
		{ 64, 87 },
		{ 63, 86 },
		{ 62, 85 },
		{ 59, 83 },
		{ 52, 78 },
		{ 41, 61 },
		{ 40, 60 },
		{ 33, 58 },
		{ 31, 56 },
		{ 30, 55 },
		{ 29, 35 },
		{ 28, 53 },
		{ 27, 48 },
		{ 21, 37 },
		{ 5, 20 },
		{ 0, 2 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 52, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 50, 13 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 6, 127 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, 29 },
		{ 44, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 38, 114 },
		{ 37, 114 },
		{ 45, 127 },
		{ 35, 114 },
		{ 34, 114 },
		{ 0, -1 },
		{ 33, 114 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 32, 114 },
		{ 31, 114 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 30, 114 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 34, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 28, 114 },
		{ 27, 114 },
		{ 26, 114 },
		{ 25, 114 },
		{ 24, 114 },
		{ 23, 114 },
		{ 22, 114 },
		{ 21, 114 },
		{ 20, 114 },
		{ 19, 114 },
		{ 27, 127 },
		{ 17, 114 },
		{ 16, 114 },
		{ 15, 114 },
		{ 14, 114 },
		{ 13, 114 },
		{ 0, -1 },
		{ 12, 114 },
		{ 20, 127 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 19, 127 },
		{ 0, -1 },
		{ 9, 114 },
		{ 8, 114 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 16, 127 },
		{ 15, 127 },
		{ 0, -1 },
		{ 14, 127 },
		{ 0, -1 },
		{ 0, -1 },
		{ 13, 127 },
		{ 0, -1 },
		{ 0, -1 },
		{ 12, 127 },
		{ 0, -1 },
		{ 11, 127 },
		{ 7, 127 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -3, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 939 ".\\myparser.y"


/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	mylexer lexer;
	myparser parser;
	if (parser.yycreate(&lexer)) {
		if (lexer.yycreate(&parser)) {
			lexer.yyin = new ifstream("test1.txt");
			n = parser.yyparse();
		}
	}
	return n;
}


