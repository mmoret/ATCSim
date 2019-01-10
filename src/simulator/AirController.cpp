/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>

namespace atcsim{

AirController::AirController() {
	// TODO Auto-generated constructor stub

}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
	std::list<Flight*> flights = Airport::getInstance()->getFlights();
	std::list<Flight*>::iterator it;

  Position pos_circuito_11(7000.0, 17000, 2500.0);
  Position pos_circuito_12(10000.0, 17000, 2300.0);
  Position pos_circuito_13(12000.0, 14000, 2200.0);
	Position pos_circuito_14(12000.0, 12000, 2100.0);
	Position pos_circuito_15(10000.0, 10000, 2000.0);
  Position pos_circuito_16(7000.0, 10000, 1900.0);
  Position pos_circuito_17(5000.0, 13000, 1800.0);
  Position pos_circuito_18(5000.0, 15000, 1700.0);
	Position pos_circuito_19(7000.0, 17000, 1600.0);
  Position pos_circuito_110(10000.0, 17000, 1500.0);
  Position pos_circuito_111(12000.0, 14000, 1400.0);
	Position pos_circuito_112(12000.0, 12000, 1300.0);
	Position pos_circuito_113(10000.0, 10000, 1200.0);
  Position pos_circuito_114(7000.0, 10000, 1100.0);
	Position pos_circuito_115(5000.0, 13000, 1000.0);
  Position pos_circuito_116(5000.0, 15000, 900.0);
	Position pos_circuito_21(16000.0, 8000, 2400.0);
	Position pos_circuito_22(14000.0, 8000, 2300.0);
	Position pos_circuito_23(12000.0, 6000, 2200.0);
	Position pos_circuito_24(12000.0, 4000, 2100.0);
	Position pos_circuito_25(14000.0, 2000, 2000.0);
	Position pos_circuito_26(16000.0, 2000, 1900.0);
	Position pos_circuito_27(18000.0, 4000, 1800.0);
	Position pos_circuito_28(18000.0, 6000, 1700.0);
	Position pos_circuito_29(16000.0, 8000, 1600.0);
	Position pos_circuito_210(14000.0, 8000, 1500.0);
	Position pos_circuito_211(12000.0, 6000, 1400.0);
	Position pos_circuito_212(12000.0, 4000, 1300.0);
	Position pos_circuito_213(14000.0, 2000, 1200.0);
	Position pos_circuito_214(16000.0, 2000, 1100.0);
	Position pos_circuito_215(18000.0, 4000, 1000.0);
	Position pos_circuito_216(18000.0, 6000, 900.0);
	Position pos_circuito_31(16000.0, -8000, 2400.0);
	Position pos_circuito_32(14000.0, -8000, 2300.0);
	Position pos_circuito_33(12000.0, -6000, 2200.0);
	Position pos_circuito_34(12000.0, -4000, 2100.0);
	Position pos_circuito_35(14000.0, -2000, 2000.0);
	Position pos_circuito_36(16000.0, -2000, 1900.0);
	Position pos_circuito_37(18000.0, -4000, 1800.0);
	Position pos_circuito_38(18000.0, -6000, 1700.0);
	Position pos_circuito_39(16000.0, -8000, 1600.0);
	Position pos_circuito_310(14000.0, -8000, 1500.0);
	Position pos_circuito_311(12000.0, -6000, 1400.0);
	Position pos_circuito_312(12000.0, -4000, 1300.0);
	Position pos_circuito_313(14000.0, -2000, 1200.0);
	Position pos_circuito_314(16000.0, -2000, 1100.0);
	Position pos_circuito_315(18000.0, -4000, 1000.0);
	Position pos_circuito_316(18000.0, -6000, 900.0);
	Position pos_circuito_41(7000.0, -17000, 2500.0);
	Position pos_circuito_42(10000.0, -17000, 2300.0);
	Position pos_circuito_43(12000.0, -14000, 2200.0);
	Position pos_circuito_44(12000.0, -12000, 2100.0);
	Position pos_circuito_45(10000.0, -10000, 2000.0);
	Position pos_circuito_46(7000.0, -10000, 1900.0);
	Position pos_circuito_47(5000.0, -13000, 1800.0);
	Position pos_circuito_48(5000.0, -15000, 1700.0);
	Position pos_circuito_49(7000.0, -17000, 1600.0);
	Position pos_circuito_410(10000.0, -17000, 1500.0);
	Position pos_circuito_411(12000.0, -14000, 1400.0);
	Position pos_circuito_412(12000.0, -12000, 1300.0);
	Position pos_circuito_413(10000.0, -10000, 1200.0);
	Position pos_circuito_414(7000.0, -10000, 1100.0);
	Position pos_circuito_415(5000.0, -13000, 1000.0);
	Position pos_circuito_416(5000.0, -15000, 900.0);
	Position pos_aterrizaje_0(3500.0, 0.0, 100.0);
	Position pos_aterrizaje_1(1500.0, 0.0, 50.0);
	Position pos_aterrizaje_2(200.0, 0.0, 25.0);
	Position pos_aterrizaje_3(-750.0, 0.0, 25.0);


	Route ra0, ra1, ra2, ra3;
  Route rc10, rc11, rc12, rc13, rc14, rc15, rc16, rc17, rc18, rc19, rc110, rc111, rc112, rc113, rc114, rc115, rc116;
	Route rc20, rc21, rc22, rc23, rc24, rc25, rc26, rc27, rc28, rc29, rc210, rc211, rc212, rc213, rc214, rc215, rc216;
	Route rc30, rc31, rc32, rc33, rc34, rc35, rc36, rc37, rc38, rc39, rc310, rc311, rc312, rc313, rc314, rc315, rc316;
	Route rc40, rc41, rc42, rc43, rc44, rc45, rc46, rc47, rc48, rc49, rc410, rc411, rc412, rc413, rc414, rc415, rc416;

	ra0.pos = pos_aterrizaje_0;
	ra0.speed = 500.0;
	ra1.pos = pos_aterrizaje_1;
	ra1.speed = 100.0;
	ra2.pos = pos_aterrizaje_2;
	ra2.speed = 19.0;
	ra3.pos = pos_aterrizaje_3;
	ra3.speed = 15.0;

  rc11.pos = pos_circuito_11;
  rc11.speed = 300.0;
  rc12.pos = pos_circuito_12;
  rc12.speed = 300.0;
  rc13.pos = pos_circuito_13;
  rc13.speed = 300.0;
	rc14.pos = pos_circuito_14;
	rc14.speed = 300.0;
	rc15.pos = pos_circuito_15;
	rc15.speed = 300.0;
	rc16.pos = pos_circuito_16;
	rc16.speed = 300.0;
	rc17.pos = pos_circuito_17;
	rc17.speed = 300.0;
	rc18.pos = pos_circuito_18;
	rc18.speed = 300.0;
	rc19.pos = pos_circuito_19;
  rc19.speed = 300.0;
  rc110.pos = pos_circuito_110;
  rc110.speed = 300.0;
  rc111.pos = pos_circuito_111;
  rc111.speed = 300.0;
  rc112.pos = pos_circuito_112;
  rc112.speed = 300.0;
	rc113.pos = pos_circuito_113;
	rc113.speed = 300.0;
	rc114.pos = pos_circuito_114;
	rc114.speed = 300.0;
	rc115.pos = pos_circuito_115;
	rc115.speed = 300.0;
	rc116.pos = pos_circuito_116;
	rc116.speed = 300.0;

	rc21.pos = pos_circuito_21;
	rc21.speed = 300.0;
	rc22.pos = pos_circuito_22;
	rc22.speed = 300.0;
	rc23.pos = pos_circuito_23;
	rc23.speed = 300.0;
	rc24.pos = pos_circuito_24;
	rc24.speed = 300.0;
	rc25.pos = pos_circuito_25;
	rc25.speed = 300.0;
	rc26.pos = pos_circuito_26;
	rc26.speed = 300.0;
	rc27.pos = pos_circuito_27;
	rc27.speed = 300.0;
	rc28.pos = pos_circuito_28;
	rc28.speed = 300.0;
	rc29.pos = pos_circuito_29;
	rc29.speed = 300.0;
	rc210.pos = pos_circuito_210;
	rc210.speed = 300.0;
	rc211.pos = pos_circuito_211;
	rc211.speed = 300.0;
	rc212.pos = pos_circuito_212;
	rc212.speed = 300.0;
	rc213.pos = pos_circuito_213;
	rc213.speed = 300.0;
	rc214.pos = pos_circuito_214;
	rc214.speed = 300.0;
	rc215.pos = pos_circuito_215;
	rc215.speed = 300.0;
	rc216.pos = pos_circuito_216;
	rc216.speed = 300.0;


	rc31.pos = pos_circuito_31;
	rc31.speed = 300.0;
	rc32.pos = pos_circuito_32;
	rc32.speed = 300.0;
	rc33.pos = pos_circuito_33;
	rc33.speed = 300.0;
	rc34.pos = pos_circuito_34;
	rc34.speed = 300.0;
	rc35.pos = pos_circuito_35;
	rc35.speed = 300.0;
	rc36.pos = pos_circuito_36;
	rc36.speed = 300.0;
	rc37.pos = pos_circuito_37;
	rc37.speed = 300.0;
	rc38.pos = pos_circuito_38;
	rc38.speed = 300.0;
	rc39.pos = pos_circuito_39;
	rc39.speed = 300.0;
	rc310.pos = pos_circuito_310;
	rc310.speed = 300.0;
	rc311.pos = pos_circuito_311;
	rc311.speed = 300.0;
	rc312.pos = pos_circuito_312;
	rc312.speed = 300.0;
	rc313.pos = pos_circuito_313;
	rc313.speed = 300.0;
	rc314.pos = pos_circuito_314;
	rc314.speed = 300.0;
	rc315.pos = pos_circuito_315;
	rc315.speed = 300.0;
	rc316.pos = pos_circuito_316;
	rc316.speed = 300.0;


	rc41.pos = pos_circuito_41;
	rc41.speed = 300.0;
	rc42.pos = pos_circuito_42;
	rc42.speed = 300.0;
	rc43.pos = pos_circuito_43;
	rc43.speed = 300.0;
	rc44.pos = pos_circuito_44;
	rc44.speed = 300.0;
	rc45.pos = pos_circuito_45;
	rc45.speed = 300.0;
	rc46.pos = pos_circuito_46;
	rc46.speed = 300.0;
	rc47.pos = pos_circuito_47;
	rc47.speed = 300.0;
	rc48.pos = pos_circuito_48;
	rc48.speed = 300.0;
	rc49.pos = pos_circuito_49;
	rc49.speed = 300.0;
	rc410.pos = pos_circuito_410;
	rc410.speed = 300.0;
	rc411.pos = pos_circuito_411;
	rc411.speed = 300.0;
	rc412.pos = pos_circuito_412;
	rc412.speed = 300.0;
	rc413.pos = pos_circuito_413;
	rc413.speed = 300.0;
	rc414.pos = pos_circuito_414;
	rc414.speed = 300.0;
	rc415.pos = pos_circuito_415;
	rc415.speed = 300.0;
	rc416.pos = pos_circuito_416;
	rc416.speed = 300.0;


  if (!Airport::getInstance()->is_booked_landing()) {
   Flight* primero = *(flights.begin());
   primero -> getRoute()-> clear();     //limpia la ruta de vuelo
 	}

  for(it = flights.begin(); it!=flights.end(); ++it)
  {
   if((*it)->getRoute()->empty())
	 {
		if((*it)-> getBearingInit() <= -1.570796327 && (*it)-> getBearingInit()>= -2.35619440)
		{
			if((*it)-> getPositionInit().get_x()>= 11500)
			{
				if (Airport::getInstance()->is_booked_landing()){
					(*it)->getRoute()->push_back(rc14);
		    	(*it)->getRoute()->push_back(rc15);
			    (*it)->getRoute()->push_back(rc16);
				 	(*it)->getRoute()->push_back(rc17);
				 	(*it)->getRoute()->push_back(rc18);
				 	(*it)->getRoute()->push_back(rc19);
				 	(*it)->getRoute()->push_back(rc110);
				 	(*it)->getRoute()->push_back(rc111);
				 	(*it)->getRoute()->push_back(rc112);
			    (*it)->getRoute()->push_back(rc113);
			    (*it)->getRoute()->push_back(rc114);
					(*it)->getRoute()->push_back(rc115);
			    (*it)->getRoute()->push_back(rc116);
					(*it)->getRoute()->push_back(rc11);
					(*it)->getRoute()->push_back(rc12);
					(*it)->getRoute()->push_back(rc13);
			  }else{
			    Airport::getInstance()->book_landing();
			    (*it)->getRoute()->push_back(ra0);
			    (*it)->getRoute()->push_back(ra1);
			    (*it)->getRoute()->push_back(ra2);
			    (*it)->getRoute()->push_back(ra3);
			 	}
			}
			if((*it)-> getPositionInit().get_x()< 11500 && (*it)-> getPositionInit().get_x()>= 7000)
			{
				if (Airport::getInstance()->is_booked_landing()) {
					(*it)->getRoute()->push_back(rc13);
					(*it)->getRoute()->push_back(rc14);
					(*it)->getRoute()->push_back(rc15);
					(*it)->getRoute()->push_back(rc16);
					(*it)->getRoute()->push_back(rc17);
					(*it)->getRoute()->push_back(rc18);
					(*it)->getRoute()->push_back(rc19);
					(*it)->getRoute()->push_back(rc110);
					(*it)->getRoute()->push_back(rc111);
					(*it)->getRoute()->push_back(rc112);
					(*it)->getRoute()->push_back(rc113);
					(*it)->getRoute()->push_back(rc114);
					(*it)->getRoute()->push_back(rc115);
					(*it)->getRoute()->push_back(rc116);
					(*it)->getRoute()->push_back(rc11);
					(*it)->getRoute()->push_back(rc12);
				}else{
				 Airport::getInstance()->book_landing();
				 (*it)->getRoute()->push_back(ra0);
				 (*it)->getRoute()->push_back(ra1);
				 (*it)->getRoute()->push_back(ra2);
				 (*it)->getRoute()->push_back(ra3);
				}
			}if((*it)-> getPositionInit().get_x()< 7000)
			{
				if (Airport::getInstance()->is_booked_landing()) {
					(*it)->getRoute()->push_back(rc11);
					(*it)->getRoute()->push_back(rc12);
					(*it)->getRoute()->push_back(rc13);
					(*it)->getRoute()->push_back(rc14);
					(*it)->getRoute()->push_back(rc15);
					(*it)->getRoute()->push_back(rc16);
					(*it)->getRoute()->push_back(rc17);
					(*it)->getRoute()->push_back(rc18);
					(*it)->getRoute()->push_back(rc19);
					(*it)->getRoute()->push_back(rc110);
					(*it)->getRoute()->push_back(rc111);
					(*it)->getRoute()->push_back(rc112);
					(*it)->getRoute()->push_back(rc113);
					(*it)->getRoute()->push_back(rc114);
					(*it)->getRoute()->push_back(rc115);
					(*it)->getRoute()->push_back(rc116);
				}else{
			    Airport::getInstance()->book_landing();
			    (*it)->getRoute()->push_back(ra0);
			    (*it)->getRoute()->push_back(ra1);
			    (*it)->getRoute()->push_back(ra2);
			    (*it)->getRoute()->push_back(ra3);
			 	}
			}
		}
		if((*it)-> getBearingInit()<=  -2.35619449 && (*it)-> getBearingInit()>= -3.141592654)
		{
		 	if((*it)-> getPositionInit().get_y()>= 8000)
			{
			 if (Airport::getInstance()->is_booked_landing()) {
				(*it)->getRoute()->push_back(rc22);
				(*it)->getRoute()->push_back(rc23);
				(*it)->getRoute()->push_back(rc24);
				(*it)->getRoute()->push_back(rc25);
				(*it)->getRoute()->push_back(rc26);
				(*it)->getRoute()->push_back(rc27);
				(*it)->getRoute()->push_back(rc28);
				(*it)->getRoute()->push_back(rc29);
				(*it)->getRoute()->push_back(rc210);
				(*it)->getRoute()->push_back(rc211);
				(*it)->getRoute()->push_back(rc212);
				(*it)->getRoute()->push_back(rc213);
				(*it)->getRoute()->push_back(rc214);
				(*it)->getRoute()->push_back(rc215);
				(*it)->getRoute()->push_back(rc216);
			 }else{
				Airport::getInstance()->book_landing();
				(*it)->getRoute()->push_back(ra0);
				(*it)->getRoute()->push_back(ra1);
				(*it)->getRoute()->push_back(ra2);
				(*it)->getRoute()->push_back(ra3);
		   }
			}
			if((*it)-> getPositionInit().get_y()< 8000 && (*it)-> getPositionInit().get_y()>= 4000)
			{
				if (Airport::getInstance()->is_booked_landing()) {
					(*it)->getRoute()->push_back(rc21);
					(*it)->getRoute()->push_back(rc22);
					(*it)->getRoute()->push_back(rc23);
					(*it)->getRoute()->push_back(rc24);
					(*it)->getRoute()->push_back(rc25);
					(*it)->getRoute()->push_back(rc26);
					(*it)->getRoute()->push_back(rc27);
					(*it)->getRoute()->push_back(rc28);
					(*it)->getRoute()->push_back(rc29);
					(*it)->getRoute()->push_back(rc210);
					(*it)->getRoute()->push_back(rc211);
					(*it)->getRoute()->push_back(rc212);
					(*it)->getRoute()->push_back(rc213);
					(*it)->getRoute()->push_back(rc214);
					(*it)->getRoute()->push_back(rc215);
					(*it)->getRoute()->push_back(rc216);
				}else{
					Airport::getInstance()->book_landing();
					(*it)->getRoute()->push_back(ra0);
					(*it)->getRoute()->push_back(ra1);
					(*it)->getRoute()->push_back(ra2);
					(*it)->getRoute()->push_back(ra3);
				}
	  	}
			if((*it)-> getPositionInit().get_y()< 4000)
			{
				if (Airport::getInstance()->is_booked_landing()) {
					(*it)->getRoute()->push_back(rc27);
					(*it)->getRoute()->push_back(rc28);
					(*it)->getRoute()->push_back(rc29);
					(*it)->getRoute()->push_back(rc210);
					(*it)->getRoute()->push_back(rc211);
					(*it)->getRoute()->push_back(rc212);
					(*it)->getRoute()->push_back(rc213);
					(*it)->getRoute()->push_back(rc214);
					(*it)->getRoute()->push_back(rc215);
					(*it)->getRoute()->push_back(rc216);
			 }else{
					Airport::getInstance()->book_landing();
					(*it)->getRoute()->push_back(ra0);
					(*it)->getRoute()->push_back(ra1);
					(*it)->getRoute()->push_back(ra2);
					(*it)->getRoute()->push_back(ra3);
				}
			}
		}
		if((*it)-> getBearingInit()>= 2.35619449 && (*it)-> getBearingInit()<= 3.141592654)
		{
			if((*it)-> getPositionInit().get_y()<= -8000)
			{
			 if (Airport::getInstance()->is_booked_landing()) {
				(*it)->getRoute()->push_back(rc32);
				(*it)->getRoute()->push_back(rc33);
				(*it)->getRoute()->push_back(rc34);
				(*it)->getRoute()->push_back(rc35);
				(*it)->getRoute()->push_back(rc36);
				(*it)->getRoute()->push_back(rc37);
				(*it)->getRoute()->push_back(rc38);
				(*it)->getRoute()->push_back(rc39);
				(*it)->getRoute()->push_back(rc310);
				(*it)->getRoute()->push_back(rc311);
				(*it)->getRoute()->push_back(rc312);
				(*it)->getRoute()->push_back(rc313);
				(*it)->getRoute()->push_back(rc314);
				(*it)->getRoute()->push_back(rc315);
				(*it)->getRoute()->push_back(rc316);
			}else{
				Airport::getInstance()->book_landing();
				(*it)->getRoute()->push_back(ra0);
				(*it)->getRoute()->push_back(ra1);
				(*it)->getRoute()->push_back(ra2);
				(*it)->getRoute()->push_back(ra3);
		   }
			}
			if((*it)-> getPositionInit().get_y()> -8000 && (*it)-> getPositionInit().get_y()< -4000)
			{
				if (Airport::getInstance()->is_booked_landing()) {
					(*it)->getRoute()->push_back(rc31);
					(*it)->getRoute()->push_back(rc32);
					(*it)->getRoute()->push_back(rc33);
					(*it)->getRoute()->push_back(rc34);
					(*it)->getRoute()->push_back(rc35);
					(*it)->getRoute()->push_back(rc36);
					(*it)->getRoute()->push_back(rc37);
					(*it)->getRoute()->push_back(rc38);
					(*it)->getRoute()->push_back(rc39);
					(*it)->getRoute()->push_back(rc310);
					(*it)->getRoute()->push_back(rc311);
					(*it)->getRoute()->push_back(rc312);
					(*it)->getRoute()->push_back(rc313);
					(*it)->getRoute()->push_back(rc314);
					(*it)->getRoute()->push_back(rc315);
					(*it)->getRoute()->push_back(rc316);
				 }else{
						Airport::getInstance()->book_landing();
						(*it)->getRoute()->push_back(ra0);
						(*it)->getRoute()->push_back(ra1);
						(*it)->getRoute()->push_back(ra2);
						(*it)->getRoute()->push_back(ra3);
				}
	  	}
			if((*it)-> getPositionInit().get_y()> -4000)
			{
				if (Airport::getInstance()->is_booked_landing()) {
					(*it)->getRoute()->push_back(rc37);
					(*it)->getRoute()->push_back(rc38);
					(*it)->getRoute()->push_back(rc39);
					(*it)->getRoute()->push_back(rc310);
					(*it)->getRoute()->push_back(rc311);
					(*it)->getRoute()->push_back(rc312);
					(*it)->getRoute()->push_back(rc313);
					(*it)->getRoute()->push_back(rc314);
					(*it)->getRoute()->push_back(rc315);
					(*it)->getRoute()->push_back(rc316);
			 	}else{
					Airport::getInstance()->book_landing();
					(*it)->getRoute()->push_back(ra0);
					(*it)->getRoute()->push_back(ra1);
					(*it)->getRoute()->push_back(ra2);
					(*it)->getRoute()->push_back(ra3);
				}
			}
		}
		if((*it)->getBearingInit() >= 1.570796327 && (*it)-> getBearingInit()<= 2.35619449)
		{
		 if((*it)-> getPositionInit().get_x()>= 11500)
		 {
				if (Airport::getInstance()->is_booked_landing()) {
				 (*it)->getRoute()->push_back(rc44);
				 (*it)->getRoute()->push_back(rc45);
				 (*it)->getRoute()->push_back(rc46);
				 (*it)->getRoute()->push_back(rc47);
				 (*it)->getRoute()->push_back(rc48);
				 (*it)->getRoute()->push_back(rc49);
				 (*it)->getRoute()->push_back(rc410);
				 (*it)->getRoute()->push_back(rc411);
				 (*it)->getRoute()->push_back(rc412);
				 (*it)->getRoute()->push_back(rc413);
				 (*it)->getRoute()->push_back(rc414);
				 (*it)->getRoute()->push_back(rc415);
				 (*it)->getRoute()->push_back(rc416);
				 (*it)->getRoute()->push_back(rc41);
				 (*it)->getRoute()->push_back(rc42);
				 (*it)->getRoute()->push_back(rc43);
			 }else{
				Airport::getInstance()->book_landing();
				(*it)->getRoute()->push_back(ra0);
				(*it)->getRoute()->push_back(ra1);
				(*it)->getRoute()->push_back(ra2);
				(*it)->getRoute()->push_back(ra3);
			 }
		 }
		 if((*it)-> getPositionInit().get_x()< 11500 && (*it)-> getPositionInit().get_x()>= 7000 )
		 {
				if (Airport::getInstance()->is_booked_landing()) {
				 (*it)->getRoute()->push_back(rc43);
				 (*it)->getRoute()->push_back(rc44);
				 (*it)->getRoute()->push_back(rc45);
				 (*it)->getRoute()->push_back(rc46);
				 (*it)->getRoute()->push_back(rc47);
				 (*it)->getRoute()->push_back(rc48);
				 (*it)->getRoute()->push_back(rc49);
				 (*it)->getRoute()->push_back(rc410);
				 (*it)->getRoute()->push_back(rc411);
				 (*it)->getRoute()->push_back(rc412);
				 (*it)->getRoute()->push_back(rc413);
				 (*it)->getRoute()->push_back(rc414);
				 (*it)->getRoute()->push_back(rc415);
				 (*it)->getRoute()->push_back(rc416);
				 (*it)->getRoute()->push_back(rc41);
				 (*it)->getRoute()->push_back(rc42);
			 }else{
				Airport::getInstance()->book_landing();
				(*it)->getRoute()->push_back(ra0);
				(*it)->getRoute()->push_back(ra1);
				(*it)->getRoute()->push_back(ra2);
				(*it)->getRoute()->push_back(ra3);
			 }
		 }if((*it)-> getPositionInit().get_x()< 7000)
		 {
			 if (Airport::getInstance()->is_booked_landing()) {
				 (*it)->getRoute()->push_back(rc41);
				 (*it)->getRoute()->push_back(rc42);
				 (*it)->getRoute()->push_back(rc43);
				 (*it)->getRoute()->push_back(rc44);
				 (*it)->getRoute()->push_back(rc45);
				 (*it)->getRoute()->push_back(rc46);
				 (*it)->getRoute()->push_back(rc47);
				 (*it)->getRoute()->push_back(rc48);
				 (*it)->getRoute()->push_back(rc49);
				 (*it)->getRoute()->push_back(rc410);
				 (*it)->getRoute()->push_back(rc411);
				 (*it)->getRoute()->push_back(rc412);
				 (*it)->getRoute()->push_back(rc413);
				 (*it)->getRoute()->push_back(rc414);
				 (*it)->getRoute()->push_back(rc415);
				 (*it)->getRoute()->push_back(rc416);
			 }else{
				Airport::getInstance()->book_landing();
				(*it)->getRoute()->push_back(ra0);
				(*it)->getRoute()->push_back(ra1);
				(*it)->getRoute()->push_back(ra2);
				(*it)->getRoute()->push_back(ra3);
			 }
		 	}
		}
	}
}
/*
for(it = flights.begin(); it!=flights.end(); ++it)
{
	if((*it)-> getPosition().get_x() <= 6000 && (*it)-> getPosition().get_y() <= 6000)
	{
		++it;
		//Airport::getInstance()->book_landing();
		(*it)->getRoute()->push_back(ra0);
		(*it)->getRoute()->push_back(ra1);
		(*it)->getRoute()->push_back(ra2);
		//(*it)->getRoute()->push_back(ra3);
	}
}*/
}
} //namespace atcsim
