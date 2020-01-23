// RandomQuestions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
	int no = 0, a[100], i = 0, flag = 0, size = 100, ch = 0;
	char ans = 'y';

	for (i = 0; i < size; i++)
		a[i] = -1;

	cout << "\n 1 to 100 random numbers.";

	cout << "\n-------------------------\n\n";
	while (flag == 0 && (ans == 'y' || ans == 'Y'))
	{
		no = (rand() % size) + 1;

		if (a[no - 1] == -1)
		{
			a[no - 1] = no;
			cout << " " << no;

			system("CLS");
			cout << "\n ";
			switch (no)
			{
				case 1 : 
					cout << "\n 1. What is the supreme law of the land? ";
					cout << "\n----------------------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . the Constitution";
					break;

				case 2:
					cout << "\n 2. What does the Constitution do?";
					cout << "\n----------------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . sets up the government. \n . defines the government \n . protects basic rights of Americans ";
					break;

				case 3:
					cout << "\n 3. The idea of self-government is in the first three words of the Constitution. What are these words?";
					cout << "\n------------------------------------------------------------------------------------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . We the People";
					break;

				case 4:
					cout << "\n 4. What is an amendment?";
					cout << "\n-------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . a change (to the Constitution) \n . an addition(to the Constitution)";
					break;

				case 5:
					cout << "\n 5. What do we call the first ten amendments to the Constitution?";
					cout << "\n-----------------------------------------------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . the Bill of Rights";
					break;

				case 6:
					cout << "\n 6. What is one right or freedom from the First Amendment?";
					cout << "\n----------------------------------------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . speech \n . religion \n . assembly \n . press \n . petition the government";
					break;

				case 7:
					cout << "\n 7. How many amendments does the Constitution have?";
					cout << "\n---------------------------------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . twenty-seven (27)";
					break;

				case 8:
					cout << "\n 8. What did the Declaration of Independence do?";
					cout << "\n------------------------------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . announced our independence (from Great Britain) \n . declared our independence(from Great Britain) \n . said that the United States is free(from Great Britain)";
					break;

				case 9:
					cout << "\n 9. What are two rights in the Declaration of Independence?";
					cout << "\n-----------------------------------------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . life \n . liberty \n . pursuit of happiness";
					break;

				case 10:
					cout << "\n 10. What is freedom of religion?";
					cout << "\n---------------------------------\n";
					ch = cin.get();
					//ch = cin.get();
					cout << "\n . You can practice any religion, or not practice a religion.";
					break;

				case 11:
					cout << "\n 11. What is the economic system in the United States?";
					cout << "\n------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . capitalist economy \n . market economy";
					break;

				case 12:
					cout << "\n 12. What is the 'rule of law'?";
					cout << "\n-------------------------------\n";
					ch = cin.get();
					cout << "\n . Everyone must follow the law. \n . Leaders must obey the law. \n . Government must obey the law. \n . No one is above the law. ";
					break;

				case 13:
					cout << "\n 13. Name one branch or part of the government.";
					cout << "\n-----------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Congress \n . legislative \n . President \n . executive \n . the courts \n . judicial";
					break;

				case 14:
					cout << "\n 14. What stops one branch of government from becoming too powerful?";
					cout << "\n--------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . checks and balances \n . separation of powers";
					break;

				case 15:
					cout << "\n 15. Who is in charge of the executive branch?";
					cout << "\n----------------------------------------------\n";
					ch = cin.get();
					cout << "\n . the President";
					break;

				case 16:
					cout << "\n 16. Who makes federal laws?";
					cout << "\n----------------------------\n";
					ch = cin.get();
					cout << "\n . Congress \n . Senate and House(of Representatives) \n . (U.S. or national) legislature";
					break;

				case 17:
					cout << "\n 17. What are the two parts of the U.S. Congress?";
					cout << "\n-------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . the Senate and House (of Representatives)";
					break;

				case 18:
					cout << "\n 18. How many U.S. Senators are there?";
					cout << "\n--------------------------------------\n";
					ch = cin.get();
					cout << "\n . one hundred (100)";
					break;

				case 19:
					cout << "\n 19. We elect a U.S. Senator for how many years? ";
					cout << "\n------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . six (6)";
					break;

				case 20:
					cout << "\n 20. Who is one of your state's U.S. Senators now?";
					cout << "\n--------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Thom Tillis";
					break;

				case 21:
					cout << "\n 21. The House of Representatives has how many voting members? ";
					cout << "\n--------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . four hundred thirty-five (435)";
					break;

				case 22:
					cout << "\n 22. We elect a U.S. Representative for how many years?";
					cout << "\n-------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . two (2)";
					break;

				case 23:
					cout << "\n 23. Name your U.S. Representative.";
					cout << "\n-----------------------------------\n";
					ch = cin.get();
					cout << "\n . David Price (Democratic)";
					break;

				case 24:
					cout << "\n 24. Who does a U.S. Senator represent?";
					cout << "\n---------------------------------------\n";
					ch = cin.get();
					cout << "\n . all people of the state";
					break;

				case 25:
					cout << "\n 25. Why do some states have more Representatives than other states?";
					cout << "\n--------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . (because of) the state's population \n . (because) they have more people \n . (because) some states have more people";
					break;

				case 26:
					cout << "\n 26. We elect a President for how many years?";
					cout << "\n---------------------------------------------\n";
					ch = cin.get();
					cout << "\n . four (4)";
					break;

				case 27:
					cout << "\n 27. In what month do we vote for President?*";
					cout << "\n--------------------------------------------\n";
					ch = cin.get();
					cout << "\n . November";
					break;

				case 28:
					cout << "\n 28. What is the name of the President of the United States now?*";
					cout << "\n-----------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Donald J. Trump \n . Donald Trump \n . Trump ";
					break;

				case 29:
					cout << "\n 29. What is the name of the Vice President of the United States now?";
					cout << "\n----------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Michael R. Pence \n . Mike Pence \n . Pence";
					break;

				case 30:
					cout << "\n 30. If the President can no longer serve, who becomes President?";
					cout << "\n------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . the Vice President";
					break;

				case 31:
					cout << "\n 31. If both the President and the Vice President can no longer serve, who becomes President?";
					cout << "\n----------------------------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . the Speaker of the House";
					break;

				case 32:
					cout << "\n 32. Who is the Commander in Chief of the military?";
					cout << "\n---------------------------------------------------\n";
					ch = cin.get();
					cout << "\n  . the President";
					break;

				case 33:
					cout << "\n 33. Who signs bills to become laws?";
					cout << "\n------------------------------------\n";
					ch = cin.get();
					cout << "\n . the President";
					break;

				case 34:
					cout << "\n 34. Who vetoes bills?";
					cout << "\n----------------------\n";
					ch = cin.get();
					cout << "\n . the President";
					break;

				case 35:
					cout << "\n 35. What does the President's Cabinet do?";
					cout << "\n-------------------------------------------\n";
					ch = cin.get();
					cout << "\n . advises the President";
					break;

				case 36:
					cout << "\n 36. What are two Cabinet-level positions?";
					cout << "\n------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Secretary of Agriculture";
					cout << "\n . Secretary of Commerce";
					cout << "\n . Secretary of Defense";
					cout << "\n . Secretary of Education";
					cout << "\n . Secretary of Energy";
					cout << "\n . Secretary of Health and Human Services";
					cout << "\n . Secretary of Homeland Security";
					cout << "\n . Secretary of Housing and Urban Development";
					cout << "\n . Secretary of the Interior";
					cout << "\n . Secretary of Labor";
					cout << "\n . Secretary of State";
					cout << "\n . Secretary of Transportation";
					cout << "\n . Secretary of the Treasury";
					cout << "\n . Secretary of Veterans Affairs";
					cout << "\n . Attorney General";
					cout << "\n . Vice President";
					break;

				case 37:
					cout << "\n 37. What does the judicial branch do?";
					cout << "\n--------------------------------------\n";
					ch = cin.get();
					cout << "\n . reviews laws \n . explains laws \n . resolves disputes(disagreements) \n . decides if a law goes against the Constitution";
					break;

				case 38:
					cout << "\n 38. What is the highest court in the United States?";
					cout << "\n-----------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . the Supreme Court";
					break;

				case 39:
					cout << "\n 39. How many justices are on the Supreme Court?";
					cout << "\n-------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . nine (9) ";
					break;

				case 40:
					cout << "\n 40. Who is the Chief Justice of the United States now?";
					cout << "\n--------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . John Roberts \n . John G.Roberts, Jr.";
					break;

				case 41:
					cout << "\n 41. Under our Constitution, some powers belong to the federal government. What is one power of the federal government ? ";
					cout << "\n-------------------------------------------------------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . to print money \n . to declare war \n . to create an army \n . to make treaties";
					break;

				case 42:
					cout << "\n 42. Under our Constitution, some powers belong to the states. What is one power of the states? ";
					cout << "\n------------------------------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . provide schooling and education \n . provide protection(police) \n . provide safety(fire departments) \n . give a driver's license \n . approve zoning and land use";
					break;

				case 43:
					cout << "\n 43. Who is the Governor of your state now?";
					cout << "\n--------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Roy Cooper";
					break;

				case 44:
					cout << "\n 44. What is the capital of your state?*";
					cout << "\n----------------------------------------\n";
					ch = cin.get();
					cout << "\n . Raleigh";
					break;

				case 45:
					cout << "\n 45. What are the two major political parties in the United States?";
					cout << "\n--------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Democratic and Republican";
					break;

				case 46:
					cout << "\n 46. What is the political party of the President now?";
					cout << "\n-------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Republican (Party) ";
					break;

				case 47:
					cout << "\n 47. What is the name of the Speaker of the House of Representatives now?";
					cout << "\n--------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Nancy Pelosi \n . Pelosi ";
					break;

				case 48:
					cout << "\n 48. There are four amendments to the Constitution about who can vote. Describe one of them.";
					cout << "\n---------------------------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Citizens eighteen (18) and older (can vote).";
					cout << "\n . You don’t have to pay(a poll tax) to vote.";
					cout << "\n . Any citizen can vote. (Women and men can vote.)";
					cout << "\n . A male citizen of any race(can vote).";
					break;

				case 49:
					cout << "\n 49. What is one responsibility that is only for United States citizens?";
					cout << "\n-------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . serve on a jury";
					cout << "\n . vote in a federal election";
					break;

				case 50:
					cout << "\n 50. Name one right only for United States citizens.";
					cout << "\n----------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . vote in a federal election \n . run for federal office";
					break;

				case 51:
					cout << "\n 51. What are two rights of everyone living in the United States?";
					cout << "\n------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . freedom of expression";
					cout << "\n . freedom of speech";
					cout << "\n . freedom of assembly";
					cout << "\n . freedom to petition the government";
					cout << "\n . freedom of religion";
					cout << "\n . the right to bear arms";
					break;

				case 52:
					cout << "\n 52. What do we show loyalty to when we say the Pledge of Allegiance?";
					cout << "\n---------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . the United States \n . the flag";
					break;

				case 53:
					cout << "\n 53. What is one promise you make when you become a United States citizen?";
					cout << "\n---------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . give up loyalty to other countries";
					cout << "\n . defend the Constitution and laws of the United States";
					cout << "\n . obey the laws of the United States";
					cout << "\n . serve in the U.S.military(if needed)";
					cout << "\n . serve(do important work for) the nation(if needed)";
					cout << "\n . be loyal to the United States";
					break;

				case 54:
					cout << "\n 54. How old do citizens have to be to vote for President?";
					cout << "\n-----------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . eighteen (18) and older";
					break;

				case 55:
					cout << "\n 55. What are two ways that Americans can participate in their democracy?";
					cout << "\n--------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . vote";
					cout << "\n . join a political party";
					cout << "\n . help with a campaign";
					cout << "\n . join a civic group";
					cout << "\n . join a community group";
					cout << "\n . give an elected official your opinion on an issue";
					cout << "\n . call Senators and Representatives";
					cout << "\n . publicly support or oppose an issue or policy";
					cout << "\n . run for office";
					cout << "\n . write to a newspaper";
					break;

				case 56:
					cout << "\n 56. When is the last day you can send in federal income tax forms?";
					cout << "\n--------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . April 15";
					break;

				case 57:
					cout << "\n 57. When must all men register for the Selective Service?";
					cout << "\n-----------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . at age eighteen (18)";
					cout << "\n . between eighteen(18) and twenty - six(26)";
					break;

				case 58:
					cout << "\n 58. What is one reason colonists came to America?";
					cout << "\n---------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . freedom";
					cout << "\n . political liberty";
					cout << "\n . religious freedom";
					cout << "\n . economic opportunity";
					cout << "\n . practice their religion";
					cout << "\n . escape persecution";
					break;

				case 59:
					cout << "\n 59. Who lived in America before the Europeans arrived?";
					cout << "\n--------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . American Indians";
					cout << "\n . Native Americans";
					break;

				case 60:
					cout << "\n 60. What group of people was taken to America and sold as slaves?";
					cout << "\n-------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Africans";
					cout << "\n . people from Africa";
					break;

				case 61:
					cout << "\n 61. Why did the colonists fight the British?";
					cout << "\n----------------------------------------------\n";
					ch = cin.get();
					cout << "\n . because of high taxes (taxation without representation)";
					cout << "\n . because the British army stayed in their houses(boarding, quartering)";
					cout << "\n . because they didn't have self - government";
					break;

				case 62:
					cout << "\n 62. Who wrote the Declaration of Independence?";
					cout << "\n------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . (Thomas) Jefferson";
					break;

				case 63:
					cout << "\n 63. When was the Declaration of Independence adopted?";
					cout << "\n-------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . July 4, 1776";
					break;

				case 64:
					cout << "\n 64. There were 13 original states. Name three.";
					cout << "\n------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . New Hampshire";
					cout << "\n . Massachusetts";
					cout << "\n . Rhode Island";
					cout << "\n . Connecticut";
					cout << "\n . New York";
					cout << "\n . New Jersey";
					cout << "\n . Pennsylvania";
					cout << "\n . Delaware";
					cout << "\n . Maryland";
					cout << "\n . Virginia";
					cout << "\n . North Carolina";
					cout << "\n . South Carolina";
					cout << "\n . Georgia";
					break;

				case 65:
					cout << "\n 65. What happened at the Constitutional Convention?";
					cout << "\n-----------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . The Constitution was written. \n . The Founding Fathers wrote the Constitution.";
					break;

				case 66:
					cout << "\n 66. When was the Constitution written?";
					cout << "\n----------------------------------------\n";
					ch = cin.get();
					cout << "\n . 1787";
					break;

				case 67:
					cout << "\n 67. The Federalist Papers supported the passage of the U.S. Constitution. Name one of the writers.";
					cout << "\n----------------------------------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . (James) Madison \n . (Alexander) Hamilton \n . (John) Jay \n . Publius";
					break;

				case 68:
					cout << "\n 68. What is one thing Benjamin Franklin is famous for?";
					cout << "\n-------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . U.S. diplomat";
					cout << "\n . oldest member of the Constitutional Convention";
					cout << "\n . first Postmaster General of the United States";
					cout << "\n . writer of “Poor Richard’s Almanac”";
					cout << "\n . started the first free libraries";
					break;

				case 69:
					cout << "\n 69. Who is the 'Father of Our Country'?";
					cout << "\n-----------------------------------------\n";
					ch = cin.get();
					cout << "\n . (George) Washington";
					break;

				case 70:
					cout << "\n 70. Who was the first President?";
					cout << "\n----------------------------------\n";
					ch = cin.get();
					cout << "\n . (George) Washington";
					break;

				case 71:
					cout << "\n 71. What territory did the United States buy from France in 1803?";
					cout << "\n------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . the Louisiana Territory \n . Louisiana";
					break;

				case 72:
					cout << "\n 72. Name one war fought by the United States in the 1800s.";
					cout << "\n------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . War of 1812";
					cout << "\n . Mexican - American War";
					cout << "\n . Civil War";
					cout << "\n . Spanish - American War";
					break;

				case 73:
					cout << "\n 73. Name the U.S. war between the North and the South. ";
					cout << "\n-------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . the Civil War \n . the War between the States";
					break;

				case 74:
					cout << "\n 74. Name one problem that led to the Civil War.";
					cout << "\n-------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . slavery \n . economic reasons \n . states' rights";
					break;

				case 75:
					cout << "\n 75. What was one important thing that Abraham Lincoln did?";
					cout << "\n------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . freed the slaves (Emancipation Proclamation)";
					cout << "\n . saved(or preserved) the Union";
					cout << "\n . led the United States during the Civil War";
					break;

				case 76:
					cout << "\n 76. What did the Emancipation Proclamation do?";
					cout << "\n------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . freed the slaves";
					cout << "\n . freed slaves in the Confederacy";
					cout << "\n . freed slaves in the Confederate states";
					cout << "\n . freed slaves in most Southern states";
					break;

				case 77:
					cout << "\n 77. What did Susan B. Anthony do?";
					cout << "\n-----------------------------------\n";
					ch = cin.get();
					cout << "\n . fought for women's rights \n . fought for civil rights";
					break;

				case 78:
					cout << "\n 78. Name one war fought by the United States in the 1900s.";
					cout << "\n-----------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . World War I \n . World War II \n . Korean War \n . Vietnam War \n . (Persian) Gulf War";
					break;

				case 79:
					cout << "\n 79. Who was President during World War I?";
					cout << "\n-------------------------------------------\n";
					ch = cin.get();
					cout << "\n . (Woodrow) Wilson";
					break;

				case 80:
					cout << "\n 80. Who was President during the Great Depression and World War II? ";
					cout << "\n---------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . (Franklin) Roosevelt";
					break;

				case 81:
					cout << "\n 81. Who did the United States fight in World War II?";
					cout << "\n------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Japan, Germany, and Italy";
					break;

				case 82:
					cout << "\n 82. Before he was President, Eisenhower was a general. What war was he in?";
					cout << "\n----------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . World War II";
					break;

				case 83:
					cout << "\n 83. During the Cold War, what was the main concern of the United States?";
					cout << "\n--------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Communism";
					break;

				case 84:
					cout << "\n 84. What movement tried to end racial discrimination?";
					cout << "\n-------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . civil rights (movement)";
					break;

				case 85:
					cout << "\n 85. What did Martin Luther King, Jr. do?";
					cout << "\n------------------------------------------\n";
					ch = cin.get();
					cout << "\n . fought for civil rights \n . worked for equality for all Americans";
					break;

				case 86:
					cout << "\n 86. What major event happened on September 11, 2001, in the United States?";
					cout << "\n----------------------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Terrorists attacked the United States";
					break;

				case 87:
					cout << "\n 87. Name one American Indian tribe in the United States.";
					cout << "\n----------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Cherokee \t . Navajo ";
					cout << "\n . Sioux    \t . Chippewa";
					cout << "\n . Choctaw  \t . Pueblo";
					cout << "\n . Apache   \t . Iroquois";
					cout << "\n . Creek    \t . Blackfeet";
					cout << "\n . Seminole \t . Cheyenne";
					cout << "\n . Arawak   \t . Shawnee";
					cout << "\n . Mohegan  \t . Huron";
					cout << "\n . Oneida   \t . Lakota";
					cout << "\n . Crow     \t . Teton";
					cout << "\n . Hopi     \t . Inuit";
					break;

				case 88:
					cout << "\n 88. Name one of the two longest rivers in the United States.";
					cout << "\n--------------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Missouri (River) \n . Mississippi(River) ";
					break;

				case 89:
					cout << "\n 89. What ocean is on the West Coast of the United States?";
					cout << "\n-----------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Pacific (Ocean)";
					break;

				case 90:
					cout << "\n 90. What ocean is on the East Coast of the United States?";
					cout << "\n-----------------------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Atlantic (Ocean)";
					break;

				case 91:
					cout << "\n 91. Name one U.S. territory.";
					cout << "\n------------------------------\n";
					ch = cin.get();
					cout << "\n . Puerto Rico \n . U.S.Virgin Islands \n . American Samoa \n . Northern Mariana Islands \n . Guam";
					break;

				case 92:
					cout << "\n 92. Name one state that borders Canada.";
					cout << "\n-----------------------------------------\n";
					ch = cin.get();
					cout << "\n . Maine         \t . New Hampshire";
					cout << "\n . Vermont       \t . New York";
					cout << "\n . Pennsylvania  \t . Ohio";
					cout << "\n . Michigan      \t . Minnesota";
					cout << "\n . North Dakota  \t . Montana";
					cout << "\n . Idaho         \t . Washington";
					cout << "\n . Alaska";
					break;

				case 93:
					cout << "\n 93. Name one state that borders Mexico.";
					cout << "\n-----------------------------------------\n";
					ch = cin.get();
					cout << "\n . California \n . Arizona \n . New Mexico \n . Texas";
					break;

				case 94:
					cout << "\n 94. What is the capital of the United States?";
					cout << "\n-----------------------------------------------\n";
					ch = cin.get();
					cout << "\n . Washington, D.C.";
					break;

				case 95:
					cout << "\n 95. Where is the Statue of Liberty?";
					cout << "\n-------------------------------------\n";
					ch = cin.get();
					cout << "\n . New York (Harbor) \n . Liberty Island";
					break;

				case 96:
					cout << "\n 96. Why does the flag have 13 stripes?";
					cout << "\n----------------------------------------\n";
					ch = cin.get();
					cout << "\n . because there were 13 original colonies \n . because the stripes represent the original colonies";
					break;

				case 97:
					cout << "\n 97. Why does the flag have 50 stars?";
					cout << "\n--------------------------------------\n";
					ch = cin.get();
					cout << "\n . because there is one star for each state";
					cout << "\n . because each star represents a state";
					cout << "\n . because there are 50 states";
					break;

				case 98:
					cout << "\n 98. What is the name of the national anthem?";
					cout << "\n----------------------------------------------\n";
					ch = cin.get();
					cout << "\n . The Star-Spangled Banner";
					break;

				case 99:
					cout << "\n 99. When do we celebrate Independence Day?";
					cout << "\n--------------------------------------------\n";
					ch = cin.get();
					cout << "\n . July 4";
					break;

				case 100:
					cout << "\n 100. Name two national U.S. holidays.";
					cout << "\n---------------------------------------\n";
					ch = cin.get();
					cout << "\n . New Year’s Day";
					cout << "\n . Martin Luther King, Jr.Day";
					cout << "\n . Presidents’ Day";
					cout << "\n . Memorial Day";
					cout << "\n . Independence Day";
					cout << "\n . Labor Day";
					cout << "\n . Columbus Day";
					cout << "\n . Veterans Day";
					cout << "\n . Thanksgiving";
					cout << "\n . Christmas";
					break;
			}

			cout << "\n\n\n Do you want to continue? (Y / N) - ";
			cin >> ans;
			ch = cin.get();
		}

		flag = 1;
		for (i = 0; i < size; i++)
		{
			if (a[i] == -1)
			{
				flag = 0;
				break;
			}
		}
	 
	}
	if (flag == 1)
	{
		cout << "\n The test is over. Well done!";
		cout << "\n******************************\n";
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
