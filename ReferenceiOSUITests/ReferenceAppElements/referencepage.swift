

import Foundation
import XCTest

enum referencePage: String {
    
    case welcomeMessage = "Hello"
    case ButtonType = "Button"
    case euroTextField="label"
    case headingText="Random Value"
    
    var element: XCUIElement {
        
        switch self {
        case .welcomeMessage,.headingText:
            return XCUIApplication().staticTexts[self.rawValue]
        case .euroTextField:
            return XCUIApplication().staticTexts[self.rawValue]
        case .ButtonType:
            return XCUIApplication().buttons[self.rawValue]
    
        }
    }
    
    
}
