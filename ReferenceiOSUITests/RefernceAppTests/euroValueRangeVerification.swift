//
//  euroValueRangeVerification.swift
//  ReferenceiOSUITests
//
//  Created by Ishuvir Singh on 04/05/2022.
//  Copyright © 2022 ABN AMRO. All rights reserved.
//


import Foundation
import XCTest

class euroValueRangeVerification: referenceBase {
    
    func testEuroValueRange(){
      givenAppIsReadyInPortrait()
      whenUserClickedButton()
      thenCurrencyRangeIsVerified()
    
    }
    
}
