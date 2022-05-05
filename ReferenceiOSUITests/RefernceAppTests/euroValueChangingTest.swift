//
//  euroValueChangingTest.swift
//  ReferenceiOSUITests
//
//  Created by Ishuvir Singh on 04/05/2022.
//  Copyright © 2022 ABN AMRO. All rights reserved.
//

import Foundation
import XCTest

class euroValueChangingTest: referenceBase {
  
    func testEuroRandomValue() {
        givenAppIsReady()
        whenMutlipleButtonPressed()
        thenEuroValueDiffer()
    
        
        
    }
 
}
